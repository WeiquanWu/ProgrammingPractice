int height(Node *root) {
        if (root == nullptr) return -1;
        
        int left = 1 + height(root->left);
        int right = 1 + height(root->right);
        
        return left > right ? left:right;
    }


    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
         if (root == nullptr) return 0;
        
        int left = 1 + maxDepth(root->left);
        int right = 1 + maxDepth(root->right);
        
        return left > right ? left:right;
    }
};