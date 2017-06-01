/**
 * Given a binary tree, find its minimum depth.
 * The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
 *
 * Problem URL: https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
	// In order to get the minium heigh of the tree we have to traverse it. We start out traversing from the left until left subtree becomes NULL. We then switch to right subtree and traverse until we get NULL. After both left and right subtrees are NULL we take the minium height of the two and return the number. In this case height represents the number of nodes we visited (traversed).

    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
     
        // Base case : Leaf Node. Height is one 
        if (root->left == NULL && root->right == NULL)
           return 1;
     
        // If left subtree is NULL, recur for right subtree
        if (!root->left)
           return minDepth(root->right) + 1;
     
        // If right subtree is NULL, recur for right subtree
        if (!root->right)
           return minDepth(root->left) + 1;
     	
     	// Take the min of the two 
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};