/*
* Problem URL:
* https://leetcode.com/problems/majority-element/
*
* Problem description:
* Given an array of size n, find the majority element. The majority element is the element that
* appears more than ⌊ n/2 ⌋ times.
*
* You may assume that the array is non-empty and the majority element always exist in the array.
* */

/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {

    if (nums.length == 1) {
        return nums[0];
    }

    // We are certain that majority will always take more than a half the size of the array
    // hence the middle element is guaranteed to be the majority. We use floor function
    // from Javascript to round the index of the element.
    nums.sort();
    return nums[Math.floor(nums.length / 2)];
};