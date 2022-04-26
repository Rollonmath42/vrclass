require("dotenv").config();
const http = require("http");
const fs = require("fs");
const https = require("https");
const express = require("express");
const sqlServer = express();
const database = require('./sql_dao.js');
const url = require("url");
const crypto = require('crypto');

let activity_switched = false;
let activity_database = {
    "carlostwo" : [{
        name : "Test Jeoparody",
        gametype : "Jeoparody",
        data : {
            "0" : {
                name : "category 0",
                tiers : {
                    "0" : "this is cat 0 tier 0",
                    "1" : "this is cat 0 tier 1",
                    "2" : "this is cat 0 tier 2",
                    "3" : "this is cat 0 tier 3"
                }
            },
            "1" : {
                name : "category 1",
                tiers : {
                    "0" : "this is cat 1 tier 0",
                    "1" : "this is cat 1 tier 1",
                    "2" : "this is cat 1 tier 2",
                    "3" : "this is cat 1 tier 3"
                }
            },
            "2" : {
                name : "category 2",
                tiers : {
                    "0" : "this is cat 2 tier 0",
                    "1" : "this is cat 2 tier 1",
                    "2" : "this is cat 2 tier 2",
                    "3" : "this is cat 2 tier 3"
                }
            },
            "3" : {
                name : "category 3",
                tiers : {
                    "0" : "this is cat 3 tier 0",
                    "1" : "this is cat 3 tier 1",
                    "2" : "this is cat 3 tier 2",
                    "3" : "this is cat 3 tier 3"
                }
            }
        }
    },
    {
        name : "Test Activity",
        gametype : "BasicQuiz",
        data : {
            questions : [{
                question : "This is a test question",
                answers : [
                    {
                        text : "This is the correct answer",
                        isCorrect : true
                    },
                    {
                        text : "This is the wrong answer",
                        isCorrect : false
                    },
                    {
                        text : "This is another wrong answer",
                        isCorrect : false
                    },
                    {
                        text : "Nope",
                        isCorrect : false
                    }
                ]
            }, 
            {
                question : "This is the second question",
                answers : [
                    {
                        text : "Don't pick me",
                        isCorrect : false
                    },
                    {
                        text : "I'm not correct",
                        isCorrect : false
                    },
                    {
                        text : "Even if I was the right answer, I wouldn't tell you!",
                        isCorrect : true
                    },
                    {
                        text : "Where am I?",
                        isCorrect : false
                    }
                ]
            }]
        }
    }]
};

let room_code_database = {};

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
            return;
        } 
        else if (result[0].userNameExists > 0) {
            console.log("Username is not available");
            res.send(create_response("Username not available", 1, {}));
            return;
        } 
        else {
            queryParameters = {
                "table": "sys.Users",
                "columns": ["username", "password"],
                "values": [request.searchParams.get("user"), request.searchParams.get("pass")]
            }

            database.insert(queryParameters, function (result, err) {
                if (err) {
                    console.log(err);
                    res.send(create_response("Something went wrong, please try again", 1, {}));
                } 
                else {
                    console.log("Successfully registered the user");
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
            return;
        } 
        else if (result[0].userExists == 1) {
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
                    return;
                } else if (result[0].validLogin == 1) {
                    console.log("Successfully logged in");
                    res.send(create_response("OK", 0, {user_no: result[0].user_no}));
                    return;
                } else {
                    console.log("Invalid password");
                    res.send(create_response("Invalid credentials", 1, {}));
                    return;
                }
            });
        } 
        else {
            console.log("Invalid login");
            res.send(create_response("Invalid credentials", 1, {}));
            return;
        }
    });
});

sqlServer.get("/vrclass_activity_list", (req, res) => {
    res.send(create_response("OK", 0, activity_database["carlostwo"]));
});

sqlServer.get("/vrclass_switch_activity_list", (req, res) => {
    if(!activity_switched) {
        activity_database["carlostwo"] = [{
        name : "Test Jeoparody",
        gametype : "Jeoparody",
        data : {
            "0" : {
                name : "Song Lyrics",
                tiers : {
                    "0" : "Hey! I just met you,<br>and this is crazy,<br>but here's my number.",
                    "1" : "I'm still a rock star,<br>I got my rock moves,<br>and I don't need you.",
                    "2" : "Back to the street where we began,<br>feeling as good as lovers can, you know",
                    "3" : "I don't ever wanna feel<br>like I did that day.<br>Take me to the place I love."
                }
            },
            "1" : {
                name : "Video Game Quotes",
                tiers : {
                    "0" : "Snake? SNAKE? SNAAAAAAAKE?",
                    "1" : "Do you get to the cloud district often?",
                    "2" : "Devotion inspires bravery.<br>Bravery inspires sacrifice.<br>Sacrifice leads to death.",
                    "3" : "Just bought a pony made of diamonds,<br>because I'm rich. So, you know.<br>That's cool. Kay, bye."
                }
            },
            "2" : {
                name : "Math Problems",
                tiers : {
                    "0" : "The sine of 0 degrees is equal to<br>this value",
                    "1" : "The square of 25 is this value",
                    "2" : "The sine of 6120 degrees is equal<br>to this value",
                    "3" : "The integral of secant of<br>an angle theta with respect to theta<br>is this equation"
                }
            },
            "3" : {
                name : "Geography",
                tiers : {
                    "0" : "This is the capital of France.",
                    "1" : "This is the capital of Puerto Rico",
                    "2" : "Helsinki is the capital of this country",
                    "3" : "San Jose is the capital of this country"
                }
            }
        }
        }];
    }
    else {
        activity_database["carlostwo"] = [{
            name : "Test Jeoparody",
            gametype : "Jeoparody",
            data : {
                "0" : {
                    name : "category 0",
                    tiers : {
                        "0" : "this is cat 0 tier 0",
                        "1" : "this is cat 0 tier 1",
                        "2" : "this is cat 0 tier 2",
                        "3" : "this is cat 0 tier 3"
                    }
                },
                "1" : {
                    name : "category 1",
                    tiers : {
                        "0" : "this is cat 1 tier 0",
                        "1" : "this is cat 1 tier 1",
                        "2" : "this is cat 1 tier 2",
                        "3" : "this is cat 1 tier 3"
                    }
                },
                "2" : {
                    name : "category 2",
                    tiers : {
                        "0" : "this is cat 2 tier 0",
                        "1" : "this is cat 2 tier 1",
                        "2" : "this is cat 2 tier 2",
                        "3" : "this is cat 2 tier 3"
                    }
                },
                "3" : {
                    name : "category 3",
                    tiers : {
                        "0" : "this is cat 3 tier 0",
                        "1" : "this is cat 3 tier 1",
                        "2" : "this is cat 3 tier 2",
                        "3" : "this is cat 3 tier 3"
                    }
                }
            }
        },
        {
            name : "Test Activity",
            gametype : "BasicQuiz",
            data : {
                questions : [{
                    question : "This is a test question",
                    answers : [
                        {
                            text : "This is the correct answer",
                            isCorrect : true
                        },
                        {
                            text : "This is the wrong answer",
                            isCorrect : false
                        },
                        {
                            text : "This is another wrong answer",
                            isCorrect : false
                        },
                        {
                            text : "Nope",
                            isCorrect : false
                        }
                    ]
                }, 
                {
                    question : "This is the second question",
                    answers : [
                        {
                            text : "Don't pick me",
                            isCorrect : false
                        },
                        {
                            text : "I'm not correct",
                            isCorrect : false
                        },
                        {
                            text : "Even if I was the right answer, I wouldn't tell you!",
                            isCorrect : true
                        },
                        {
                            text : "Where am I?",
                            isCorrect : false
                        }
                    ]
                }]
            }
        }];
    }

    activity_switched = !activity_switched;
    res.send(create_response("OK", 0, {switched : activity_switched}));
});

sqlServer.get("/vrclass_register_session", (req, res) => {
    let origin = "https://vrclass";
    let request = new URL(origin.concat(req.url));

    let hash = crypto.createHash('sha256');
    hash.update(request.searchParams.get("user").concat(Date.now()));

    let room_code = hash.digest("hex").substr(0, 6).toUpperCase();

    room_code_database[room_code] = req.ip.split(":").pop();
    
    res.send(create_response("OK", 0, {room_code}));
});

sqlServer.get("/vrclass_resolve_room_code", (req, res) => {
    let origin = "https://vrclass";
    let request = new URL(origin.concat(req.url));
    let room_code = request.searchParams.get("room_code");

    if(!room_code || room_code.length != 6) {
        res.send(create_response("That was an invalid room code.", 0, {ip: room_code_database[room_code]}));
        return;
    }

    if(room_code_database[room_code]) {
        res.send(create_response("OK", 0, {ip: room_code_database[room_code]}));
        return;
    }

    res.send(create_response("That was an invalid room code.", 1, {ip: room_code_database[room_code]}));
});

function create_response(message, error, data) {
    return {
        message,
        error,
        data
    }
}

sqlServer.disable("x-powered-by");
//Swap the commented out lines with the uncommented lines as needed for testing
//let private_key = fs.readFileSync("./localhost.key", "utf8");
//let certificate = fs.readFileSync("./localhost.crt", "utf8");
let private_key = fs.readFileSync("./rollonsd2tools.key", "utf8");
let certificate = fs.readFileSync("./rollonsd2tools.crt", "utf8");
let credentials = { key: private_key, cert: certificate };
let httpsServer = https.createServer(credentials, sqlServer);
//httpsServer.listen(443);
httpsServer.listen(25565);