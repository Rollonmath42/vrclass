const express = require("express");
const app = express();
const mysql = require('mysql');
require("dotenv").config();
const connection = mysql.createConnection({
    host: "vrclass-users.cszogmexu45n.us-east-1.rds.amazonaws.com",
    user: "principal",
    password: process.env.MYSQL_PASSWORD
})

app.get("/test", (req, res) => {
    connection.query("select * from sys.test_user;", (error, result) => {
        if(error) {
            throw error;
        }

        res.send({"message" : `${result[0].userName}`});
    });
});

connection.connect((error) => {
    if(error) {
        throw error;
    }

    app.listen(80);
});