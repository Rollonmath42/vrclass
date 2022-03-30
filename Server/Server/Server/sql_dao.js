require("dotenv").config();
const mysql = require('mysql');
const sanitize = require('./sql_sanitize');

const connection = mysql.createConnection({
    ssl: process.env.MYSQL_SSL,
    host: process.env.MYSQL_SERVER,
    user: process.env.MYSQL_USER,
    password: process.env.MYSQL_PASSWORD
})

function buildQuery(queryParameters) {
    var queryString = "";
    var columnsString = buildColumnsString(queryParameters.columns);
    var tableString = sanitize.isValid(queryParameters.table) ? queryParameters.table : "";
    var conditionalsString = buildConditionalsString(queryParameters.keys, queryParameters.terms);

    if (columnsString == "" || tableString == "" || conditionalsString == "") {
        return "";
    };

    queryString = queryString.concat("SELECT ", columnsString, " FROM ", tableString,
        " WHERE (", conditionalsString, ");");

    return queryString;
};

function buildColumnsString(columnArray) {
    var returnString = "";
    var columnCount = 0;
    columnArray.forEach(column => {
        if (columnCount > 0) returnString = returnString.concat(", ");
        returnString = returnString.concat(column);
        columnCount++;
    });
    if (!sanitize.isValid(returnString)) {

        returnString = "";
    };
    return returnString;
}

function buildConditionalsString(keys, terms) {
    var returnString = "";
    var keyCount = 0;
    keys.forEach(key => {
        if (keyCount > 0) returnString = returnString.concat(" AND ");
        if (sanitize.isValid(key) && sanitize.isValid(terms[keyCount])) {
            returnString = returnString.concat(key, "= BINARY '", terms[keyCount], "'");
        } else {
            console.log("Failed sanitation: Key=".concat(key, " Term=", terms[keyCount]));
            returnString == "";
            return returnString;
        };
        keyCount++;
    });
    return returnString;
}

function query(queryParameters, callback) {
    
    var returnValue = null;
    var queryString = buildQuery(queryParameters);
    console.log(queryString);
    if (!queryString == "") {
        connection.query(queryString, (error, returnValue) => {
            if (error) callback(error);
            callback(returnValue);
        });
    } else {
        callback("query failed");
    }
};

module.exports = { query };