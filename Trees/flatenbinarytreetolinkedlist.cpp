/**
 * 114. Flatten Binary Tree to Linked List
 * 
 * Given a binary tree, flatten it to a linked list in-place.
 *
 * Problem URL: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
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
	TreeNode* flattenRecursively(TreeNode *root) {
        
        // Covers cases when there is no root, or left and right child 
        if (!root || !root->left && !root->right) {
        	return root;
        }
      
        TreeNode *leftChild = flattenRecursively(root->left);
        TreeNode *rightChild = flattenRecursively(root->right);
 
        if (leftChild) {
        	leftChild->right = root->right;
        } 

        if (root->left) {
        	root->right = root->left; 
        	root->left = NULL;
       	}
        
        if(rightChild) {
        	return rightChild; 

        } else {
        	return leftChild;
        }
    }

    void flatten(TreeNode* root) {
    	// By using recursion we simply flatten left and right subtree and paste each sublist to the right child of the root leaving the left side eventualy to be NULL. 
        flattenRecursively(root);
    }
};