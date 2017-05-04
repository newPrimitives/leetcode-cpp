/**
 * 242. Valid Anagram
 * 
 * Given two strings s and t, write a function to determine if t is an anagram of s.
 * 
 * For example,
 * s = "anagram", t = "nagaram", return true.
 * s = "rat", t = "car", return false.
 * 
 * Note:
 * You may assume the string contains only lowercase alphabets.
 * 
 * Follow up:
 * What if the inputs contain unicode characters? How would you adapt your solution to such case?
 *
 * Problem URL: https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        /**
         * If two strings are not of the same size we return false, otherwise we sort the strings, and if they are anagrams, they will be equal.
         */
        if(s.size() != t.size()) {
            return false;

        } else {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }
    }
};