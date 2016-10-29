/*
* Problem URL: https://leetcode.com/problems/roman-to-integer/
*
* Problem description:
* Given a roman numeral, convert it to an integer.
*
* Input is guaranteed to be within the range from 1 to 3999.
*/

/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {

    if(s.length == 0) {
        return 0;
    }

    var length = s.length;
    var sum = 0;
    var previous = 0;

    // Reverse the loop iteration so we start from the lowest number first
    for(var i = length -1; i>=0; i--) {
        var current = romanToNumber(s[i]);

        /*
        * If it is the first iteration we sum the values and current and previous for future reference. Else, we check if the
        * current number is smaller than the previous, in which case we subtract from the sum, else we add. For example, XIX is
        * number 19 and in this case we will have two additions and one subtraction because the second "decimal I" will be smaller than
        * the previous "X". However in case of, for example "XV" which is 15 we only add.
        */

        if(i == length - 1) {
            sum = sum + current;
        } else {
            if(current < previous) {
                sum = sum - current
            } else {
                sum = sum + current;
            }
        }

        previous = current;
    }

    return sum;
};

/**
 * @param {string} character - Single character
 * @return {number}
 */
function romanToNumber(character) {
    var num = 0;
    switch(character){
        case 'I':
            num = 1;
            break;
        case 'V':
            num = 5;
            break;
        case 'X':
            num = 10;
            break;
        case 'L':
            num = 50;
            break;
        case 'C':
            num = 100;
            break;
        case 'D':
            num = 500;
            break;
        case 'M':
            num = 1000;
            break;
        default:
            num = 0;
            break;
    }
    return num;
}