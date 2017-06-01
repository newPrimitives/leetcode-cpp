/**
 * Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
 *
 * Problem URL: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convertArrayToBST(nums, 0, nums.size()-1);
    }
        
    // We have to create a method which will recursivley generate tree based on the start and end index of the array.
    TreeNode *convertArrayToBST(vector<int> &nums, int start, int end) {
        if(start>end) 
            return NULL;
        
        //Since the array is sorted we can safely take the middle of the array as the root element 
        int mid = start + (end-start)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        
        // We then assign left and right childs by taking all the elements left of the array mid to be the left subtree and all the elements right from the mid of the array to be right. We repeat this untill we reach the end of the array (start>end)
        root->left = convertArrayToBST(nums, start, mid-1);
        root->right = convertArrayToBST(nums, mid+1, end);
        
        return root;
    }
};