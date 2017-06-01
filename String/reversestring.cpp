/**
 * Write a function that takes a string as input and returns the string reversed.
 * 
 * Example:
 * Given s = "hello", return "olleh".
 *
 * Problem URL: https://leetcode.com/problems/reverse-string/
 */

class Solution {
public:
	// We keep track of two pointers, one from the start and one from the end of the array. We also introduce a temp variable
	// where we will keep the char we are swaping. We also use the advantage where every strnig in C++ can also be considered
	// as array of chars so we don't have to introduce an extra variable to hold a new "reversed" string. 
    string reverseString(string s) {
        for(int i = 0, j = s.size()-1; i < j; i++, j--){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }

        return s;
    }
};