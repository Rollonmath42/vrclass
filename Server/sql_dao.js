require("dotenv").config();
const mysql = require('mysql');
const sanitize = require('./sql_sanitize');

const connection = mysql.createConnection({
    ssl: process.env.MYSQL_SSL,
    host: process.env.MYSQL_SERVER,
    user: process.env.MYSQL_USER,
    password: process.env.MYSQL_PASSWORD
})

function buildInsert(queryParameters) {
    var insertString = "";
    var tableString = sanitize.isValid(queryParameters.table) ? queryParameters.table : "";
    var columnsString = buildColumnsInsert(queryParameters.columns);    
    var valuesString = buildValuesInsert(queryParameters.values);

    if (columnsString == "" || tableString == "" || valuesString == "") {
        return "";
    };

    insertString = insertString.concat("INSERT INTO ", tableString, " ", columnsString,
        " ", valuesString, ";");

    return insertString;
};

function buildQuery(queryParameters) {
    var queryString = "";
    var columnsString = buildColumnsQuery(queryParameters.columns);
    var tableString = sanitize.isValid(queryParameters.table) ? queryParameters.table : "";
    var conditionalsString = buildConditionalsString(queryParameters.keys, queryParameters.terms);

    if (columnsString == "" || tableString == "" || conditionalsString == "") {
        return "";
    };

    queryString = queryString.concat("SELECT ", columnsString, " FROM ", tableString,
        " WHERE (", conditionalsString, ");");

    return queryString;
};

function buildColumnsInsert(columnArray) {
    //(username, password)
    var returnString = "(";
    var columnCount = 0;
    columnArray.forEach(column => {
        if (columnCount > 0) returnString = returnString.concat(", ");
        returnString = returnString.concat(column);
        columnCount++;
    });
    returnString = returnString.concat(")");

    if (!sanitize.isValid(returnString)) {
        returnString = "";
    };

    return returnString;
}

function buildColumnsQuery(columnArray) {
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
    var sanitize_failed = false;
    keys.forEach(key => {
        if (!sanitize_failed) {
            if (keyCount > 0) returnString = returnString.concat(" AND ");

            if (sanitize.isValid(key) && sanitize.isValid(terms[keyCount])) {
                returnString = returnString.concat(key, "= BINARY '", terms[keyCount], "'");
            } else {
                console.log("Failed sanitation: Key=".concat(key, " Term=", terms[keyCount]));
                returnString = "";
                sanitize_failed = true;
            };
            keyCount++;
        }
    });
    return returnString;
}

function buildValuesInsert(values, terms) {
    var returnString = "VALUES (";
    var valueCount = 0;
    var sanitize_failed = false;
    values.forEach(value => {
        if (!sanitize_failed) {
            if (valueCount > 0) returnString = returnString.concat(", ");

            if (sanitize.isValid(value)) {
                if (isNaN(value) && typeof(value) != "boolean") {
                    returnString = returnString.concat("'", value, "'");
                } else {
                    returnString = returnString.concat(value);
                }
            } else {
                console.log("Failed sanitation : Value = ".concat(value));
                returnString = "";
                sanitize_failed = true;
            };
            valueCount++;
        }
    });
    returnString = returnString.concat(")");
    return returnString;
}

function insert(queryParameters, callback) {
    var insertString = buildInsert(queryParameters);

    if (!insertString == "") {
        connection.query(insertString, (error, returnValue) => {
            if (error) callback(error);
            callback(returnValue);
        });
    }
    else {
        callback("");
    }
}

function query(queryParameters, callback) {
    var queryString = buildQuery(queryParameters);

    if (!queryString == "") {
        connection.query(queryString, (error, returnValue) => {
            if (error) callback(error);
            callback(returnValue);
        });
    }
    else {
        callback("");
    }
};

module.exports = { insert, query };