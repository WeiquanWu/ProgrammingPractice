/**
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]

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
    vector<vector<int>> levelOrder(TreeNode* root) {
      if(root == nullptr)
          return vector<vector<int>>();
        
        vector<vector<int>> ans;
        vector<TreeNode*> level { root };//create a level by adding the root node to it
        while (!level.empty()) {
            vector<TreeNode*> new_level;{//list of all nodes in this level
                vector<int> v; //construct the int vector representing vals on this level
                v.reserve(level.size());
                for (const auto t : level) {
                    v.push_back(t->val); //add the values on this level to the level vector
                    if (t->left != nullptr) {
                        new_level.push_back(t->left); //add the next node to the levels queue
                    }
                    if (t->right != nullptr) {
                        new_level.push_back(t->right);
                    }
                }
                ans.emplace_back(move(v));
            }
            level = move(new_level);
        }
        return ans;
    }
};