require("dotenv").config();
const http = require("http");
const express = require("express");
const sqlServer = express();
const database = require('./sql_dao.js');
const url = require("url");

sqlServer.get("/test1", (req, res) => {

    database.query(function (result, err) {
        if (err) {
            console.log(err);
        } else {
            res.send(result);
        }
    });
});

sqlServer.get("/test2", (req, res) => {

    var testString = "Test' String";
    var queryParameters = {
        "columns": ["userName", "userPass"],
        "table": "sys.test_user",
        "keys": ["userName"],
        "terms": ["Stanley"]
    };

    database.query(queryParameters, function (result, err) {
        if (err) {
            console.log(err);
        } else {
            res.send(result);
        }
    });
});

sqlServer.get("/vrclass_login", (req, res) => {
    var request = http(req);
    var userName = request.getHeader("user_name");
    var userPass = requres.getHeader("password");

    connection.query("select * from sys.test_user WHERE ('userName' = ? AND 'userPass' = ?", (error, result) => {
        if (error) {
            throw error;
        }

        res.send({ "message": `${result[0].userName}` });
    });
});

sqlServer.disable("x-powered-by");
sqlServer.listen(80);