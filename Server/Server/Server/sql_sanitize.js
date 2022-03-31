function doesNotContainInvalidCharacters(string) {
    const nonAllowedCharactersRegEx = /[#$%^&+\-=\[\]{};':"\\|<>\/?]/;

    return (string.match(nonAllowedCharactersRegEx) == null);
}

function isNotNull(string) {
    return !(string == null);
}

function isValid(string) {
    //var isValidString = isNotNull(string);
    if (isNotNull(string)) {
        if (!isNaN(string) || doesNotContainInvalidCharacters(string)) {
            return true;
        }
    }
    return false;
}

module.exports = { isValid };