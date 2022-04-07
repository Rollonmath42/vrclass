require("dotenv").config();
const http = require("http");
const fs = require("fs");
const https = require("https");
const express = require("express");
const sqlServer = express();
const database = require('./sql_dao.js');
const url = require("url");
const crypto = require('crypto');


sqlServer.get("/vrclass_register", (req, res) => {
    const origin = "https://vrclass";
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
            res.send(create_response("Something went wrong, please try again", 1, {}));
        } else if (result[0].userNameExists > 0) {
            console.log("username is not available");
            res.send(create_response("Username not available", 1, {}));
        } else {

            queryParameters = {
                "table": "sys.Users",
                "columns": ["username", "password"],
                "values": [request.searchParams.get("user"), request.searchParams.get("pass")]
            }

            database.insert(queryParameters, function (result, err) {
                if (err) {
                    console.log(err);
                    res.send(create_response("Something went wrong, please try again", 1, {}));
                } else {
                    console.log("Response: ");
                    console.log(result);
                    res.send(create_response("OK", 0, {}));
                }
            });
        }
    });

});

sqlServer.get("/vrclass_login", (req, res) => {
    const origin = "https://vrclass";
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
            res.send(create_response("Something went wrong, please try again", 1, {}));
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
                    res.send(create_response("Something went wrong, please try again", 1, {}));
                } else if (result[0].validLogin == 1) {
                    console.log("Response: ".concat(result[0].user_no));
                    res.send(create_response("OK", 0, {user_no: result[0].user_no}));
                } else {
                    console.log("Response: invalid password");
                    res.send(create_response("Invalid credentials", 1, {}));
                }
            });
        } else {
            console.log("Response: invalid login");
            res.send(create_response("Invalid credentials", 1, {}));
        }

    });

    /*var queryParameters = {
        "columns": ["count(*) as validLogin", "user_no"],
        "table": "sys.Users",
        "keys": ["username", "password"],
        "terms": [request.searchParams.get("user"), request.searchParams.get("pass")]
    };*/
});

function create_response(message, error, data) {
    return {
        message,
        error,
        data
    }
}

sqlServer.disable("x-powered-by");
let private_key = fs.readFileSync("./localhost.key", "utf8");
let certificate = fs.readFileSync("./localhost.crt", "utf8");
let credentials = { key: private_key, cert: certificate };
let httpsServer = https.createServer(credentials, sqlServer);
httpsServer.listen(25565);