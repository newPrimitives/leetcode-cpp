/*
* Problem URL:
* https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*
* Problem description:
* Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
* Do not allocate extra space for another array, you must do this in place with constant memory.
*
* For example,
* Given input array nums = [1,1,2],
* Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
* */

/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {

    // First cover a special case with an empty array or a single item
    if(nums.length <= 1) {
        return nums.length;
    }

    /*
     * Use variables i and j to for comparing array values. Use variable i to iterate/skip over the same values,
     * and variable j to keep track of the unique elements.
     * */
    var j = 0, i = 1;

    while (i < nums.length) {
        if(nums[i] == nums[j]) {
            i++;
        } else {
            j++;
            nums[j] = nums[i];
            i++;
        }
    }

    return j+1;
};