/*
* Problem URL: https://leetcode.com/problems/valid-anagram/
*
* Problem description:
* Given two strings s and t, write a function to determine if t is an anagram of s.
*
* For example,
* s = "anagram", t = "nagaram", return true.
* s = "rat", t = "car", return false.
*
* Note:
* You may assume the string contains only lowercase alphabets.
*/

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {

    // If length of both arrays is not the same, it means they are not anagrams.
    if (s.length != t.length) {
        return false;
    }

    // Convert string to array of chars
    var stringOne = s.split('');
    var stringTwo = t.split('');

    // Sort both arrays
    stringOne.sort();
    stringTwo.sort();

    // Convert them to strings and check if they are the same, if yes, then they are anagrams.
    return stringOne.toString() == stringTwo.toString();
};