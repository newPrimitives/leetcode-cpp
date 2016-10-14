/*
* Problem URL:
* https://leetcode.com/problems/remove-element/
*
* Problem description:
* Given an array and a value, remove all instances of that value in place and return the new length.
* Do not allocate extra space for another array, you must do this in place with constant memory.
*
* The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*
* Example:
* Given input array nums = [3,2,2,3], val = 3
*
* Your function should return length = 2, with the first two elements of nums being 2.
 * */

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {

    // Use variables i and j as iterators
    var i=0, j=0;

    // For the length of the array, loop through, if the value of current and given element (val) are not the same
    // move that element to position j, because as the task says  It doesn't matter what you leave beyond the new length.
    while(i < nums.length){
        if(nums[i] != val){
            nums[j] = nums[i];
            j++;
        }

        i++;
    }

    // Return the length (number of swaps), or the number of elements we removed
    return j;
};