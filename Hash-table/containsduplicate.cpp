/**
 * 217. Contains Duplicate
 * 
 * Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array,
 * and it should return false if every element is distinct.
 *
 * Problem URL: https://leetcode.com/problems/contains-duplicate/
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size()==0){
            return false;
        }

        map<int, bool> hastable;
        // We can easily solve this problem by using a hash table and simply checking if the current value is presnet in the map. If yes that means we found the duplicate, if not we add the value to the table.
        for (int i=0; i<nums.size(); i++){
            if (hastable.find(nums[i]) == hastable.end()){
                hastable[nums[i]] = true;
            
            } else{
                return true;
            }
        }

        return false;
    }
};
