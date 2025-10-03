// Last updated: 3/10/2025, 1:04:59 pm
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<int> &vec){
        if(root==NULL) return;

        solve(root->left,vec);
        solve(root->right,vec);
        vec.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        solve(root,vec);
        return vec;
    }
};