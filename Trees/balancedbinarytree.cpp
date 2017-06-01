/**
 * Given a binary tree, determine if it is height-balanced.
 * 
 * For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of
 * every node never differ by more than 1.
 * 
 * Problem URL: https://leetcode.com/problems/balanced-binary-tree/
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
    bool isBalanced(TreeNode *root) {
        if(getDepth(root) == -1) {
            return false;
        } else {
            return true;
        }
    }
    
    // We have to traverse through the tree and count the "height". If the difference between left and right subtree is greater than 1 it means the tree is unbalanced. We can compare the child of the node with -1 to check if it is NULL since -1 indicates that there is no child element for the given node.  
    int getDepth(TreeNode *root) {
        if(!root) {
            return 0;
        }

        int leftDepth = getDepth(root->left);      
        if(leftDepth == -1) {
            return -1;
        }

        int rightDepth = getDepth(root->right);   
        if(rightDepth == -1) {
            return -1;
        }

        if(abs(leftDepth-rightDepth) > 1) {
            return -1;
        }
        
        return max(leftDepth,rightDepth) + 1;
    }
};