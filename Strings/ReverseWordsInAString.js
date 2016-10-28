/**
 * @param {string} str
 * @returns {string}
 */
var reverseWords = function(str) {

    var tempArray = str.split(" ");
    var reverse =  "";

    // When we convert the string to array we start from the back, since we want to reverse the word. For each new word, we also append the ' ' space between.
    for (var i = tempArray.length - 1 ; i>= 0; i--) {
        if(tempArray[i] != "") {
            reverse += tempArray[i];
            reverse += " ";
        }
    }

    // If the length is greater than 0 it means that our string will have one extra ' ' at the end so we trim it, else we simply return empty string.
    if(reverse.length > 0) {
        return reverse.substring(0, reverse.length - 1);
    } else {
        return "";
    }
};