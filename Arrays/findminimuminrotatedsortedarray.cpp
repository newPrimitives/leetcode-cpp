/**
 * 153. Find Minimum in Rotated Sorted Array
 * 
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
 * (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
 * 
 * Find the minimum element.
 * 
 * You may assume no duplicate exists in the array.
 *
 * Problem URL: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 */

class Solution {
public:
    int findMin(vector<int> &num) {
        
        int start = 0;
        int end = num.size() - 1;

        /**
         * If we pick the middle element, and compare if it is less than leftmost, the left half should be selected; 
         * if the middle element is greater than the leftmost (or rightmost), the right half should be selected.
         */
        while(start < end) {
            int mid = start + (end-start) / 2;
            
            if(num[mid] < num[end]) {
                end = mid;
            } else {
                start = mid+1;
            }
        }

        return num[start];
    }
};