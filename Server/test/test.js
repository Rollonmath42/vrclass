const assert = require("assert");
const sanitize = require("../sql_sanitize");
const dao = require("../sql_dao");

describe("SQL Sanitize Module", function () {
    describe("isValid()", function () {
        it("should return 'false' with most non-alpha-numeric based strings", function () {
            assert.equal(sanitize.isValid(null), false);
            assert.equal(sanitize.isValid("$"), false);
            assert.equal(sanitize.isValid("dfg98sho43Q$#^%"), false);
        });
        it("should return 'true' with alpha-numeric based strings", function () {
            assert.equal(sanitize.isValid("hello"), true);
            assert.equal(sanitize.isValid(""), true);
            assert.equal(sanitize.isValid("as8d7fo6sad987yigh2y3iu4h2l3ihuihnref"), true);
        });
    });
});