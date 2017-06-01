/**
 * Given two binary trees, write a function to check if they are equal or not.
 * Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
 *
 * Problem URL: https://leetcode.com/problems/same-tree/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
		if(p == null || q == null) {
			return (p == q);
		}
       	
       	// Recursively check if both left and rights childs exist and if their values are the same. 
       	// If any of the conditions fail trees are not the same
		return isSameTree(p.left, q.left) && isSameTree(p.right, q.right) && p.val == q.val; 
    }
};