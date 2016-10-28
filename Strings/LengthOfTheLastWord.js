/*
* Problem URL: https://leetcode.com/problems/length-of-last-word/
*
* Problem description:
* Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
*
* If the last word does not exist, return 0.
*
* Note: A word is defined as a character sequence consists of non-space characters only.
*
 */
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {

    if(s == null || s.length == 0) {
        return 0;
    }

    var result = 0;
    var length = s.length;

    var flag = false;
    // We are looking for the length of the last word, hence we start from the back.
    for(var i = length-1; i>=0; i--) {
        var char = s[i];

        // If character is in the range from a to z or has a special character - we count it's length. The first time this condition,
        // evaluates to false it means we have reached the end of the word and we return the length.
        if((char >= 'a' && char <= 'z') || (char >='A' && char <='Z') || char == '-') {
            flag = true;
            result ++;
        } else {
            if(flag == true)
                return result;
        }
    }

    return result;
};