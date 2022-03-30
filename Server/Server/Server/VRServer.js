require("dotenv").config();
const http = require("http");
const express = require("express");
const sqlServer = express();
const database = require('./sql_dao.js');
const url = require("url");

sqlServer.get("/vrclass_login", (req, res) => {
    const origin = "https://vrclass";
    const request = new URL("".concat(origin, req.url));
    const displayName = "userName";

    var queryParameters = {
        "columns": ["count(*) as validLogin", displayName],
        "table": "sys.test_user",
        "keys": ["userName", "userPass"],
        "terms": [request.searchParams.get("user"), request.searchParams.get("pass")]
    };

    database.query(queryParameters, function (result, err) {
        if (err) {
            console.log(err);
        } else {
            if (result[0].validLogin == 1) {
                res.send(result[0].userName);
            } else {
                res.send("invald login");
            }            
        }
    });
});

sqlServer.disable("x-powered-by");
sqlServer.listen(80);