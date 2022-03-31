require("dotenv").config();
const http = require("http");
const express = require("express");
const sqlServer = express();
const database = require('./sql_dao.js');
const url = require("url");
const crypto = require('crypto');


sqlServer.get("/vrclass_register", (req, res) => {
    const origin = "http://vrclass";
    const request = new URL(origin.concat(req.url));

    var userName = request.searchParams.get("user");

    var queryParameters = {
        "columns": ["count(*) as userNameExists"],
        "table": "sys.Users",
        "keys": ["username"],
        "terms": [request.searchParams.get("user")]
    };

    database.query(queryParameters, function (result, err) {
        if (err) {
            console.log(err);
        } else if (result[0].userNameExists > 0) {
            console.log("username is not available");
            res.send("username is not available");
        } else {

            queryParameters = {
                "table": "sys.Users",
                "columns": ["username", "password"],
                "values": [request.searchParams.get("user"), request.searchParams.get("pass")]
            }

            database.insert(queryParameters, function (result, err) {
                if (err) {
                    console.log(err);
                } else {
                    console.log("Response: ".concat(result));
                    res.send(result);
                }
            });
        }
    });

});

sqlServer.get("/vrclass_login", (req, res) => {
    const origin = "http://vrclass";
    const request = new URL(origin.concat(req.url));

    var queryParameters = {
        "columns": ["count(*) as userExists", "salt"],
        "table": "sys.Users",
        "keys": ["username"],
        "terms": [request.searchParams.get("user")]
    };

    database.query(queryParameters, function (result, err) {

        if (err) {
            console.log(err);
        } else if (result[0].userExists == 1) {

            const hash = crypto.createHash('sha256');
            hash.update(request.searchParams.get("pass").concat(result[0].salt));

            var queryParameters = {
                "columns": ["count(*) as validLogin", "user_no"],
                "table": "sys.Users",
                "keys": ["username", "password"],
                "terms": [request.searchParams.get("user"), hash.digest('hex')]
            }

            database.query(queryParameters, function (result, err) {
                if (err) {
                    console.log(err);
                } else if (result[0].validLogin == 1) {
                    console.log("Response: ".concat(result[0].user_no));
                    res.send(result);
                } else {
                    console.log("Response: invalid password");
                    res.send("invald login");
                }
            });
        } else {
            console.log("Response: invalid login");
            res.send("invald login");
        }

    });

    /*var queryParameters = {
        "columns": ["count(*) as validLogin", "user_no"],
        "table": "sys.Users",
        "keys": ["username", "password"],
        "terms": [request.searchParams.get("user"), request.searchParams.get("pass")]
    };*/
});

sqlServer.disable("x-powered-by");
sqlServer.listen(80);