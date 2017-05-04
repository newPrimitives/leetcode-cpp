/**
 * 179. Largest Number
 * 
 * Given a list of non negative integers, arrange them such that they form the largest number.
 * 
 * For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.
 * 
 * Note: The result may be very large, so you need to return a string instead of an integer.
 *
 * Problem URL: https://leetcode.com/problems/largest-number/
 */

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numbersAsStrings;
        /*
        This problem can be solve by simply sorting strings instead of sorting integers. The naive approach
        would be to sort the array of string and then list all posibile concatenations of strings and select the largest from it. However, we can use string comparison within sort function which will do the work for us. In addition, sort modifies the existing array so no extra memory will be alocated. 
        */
       
        // We convert the numbers into strings and push into an empty array. 
        for (int i = 0; i < nums.size(); i++) {
            numbersAsStrings.push_back(to_string(nums[i]));
        }

        // Initiaize a variable of type string which we will use for return 
        string result = "";

        // Sort, compare concatinated strings and replce them within the same array 
        sort(numbersAsStrings.begin(), numbersAsStrings.end(), [](string &s1, string &s2) {
            return s1 + s2 > s2 + s1;
        });

        // Convert back the array of strings into a single string 
        for (int i = 0; i < numbersAsStrings.size(); i++) {
            result += numbersAsStrings[i];
        }

        // covers case when we have [0, 0]
        if (result[0] == '0') {
            return "0";
        } else {
            return result;
        }
    }
};