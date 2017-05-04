/**
 * 136. Single Number
 * 
 * Given an array of integers, every element appears twice except for one. Find that single one.
 * 
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 *
 * Problem URL: https://leetcode.com/problems/single-number/
 */

class Solution {
public:
    /**
     * The key to solve this problem is bit manipulation. XOR will return 1 only on two different bits. So if two numbers are the same, XOR will return 0.
     * Otherwise it will return 1. If there is only 1 number in the array for loop will not be executed 
     */
    int singleNumber(vector<int>& nums) {
        int current = nums[0];

        for(int i=1; i<nums.size(); i++){
            cout<< current ^ nums[i]; 
            current = current ^ nums[i];  
        }

        return current;
    }
};