// Last updated: 14/11/2025, 7:17:41 pm
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
    TreeNode* searchbst(TreeNode* root, int val){
        if(root==NULL || val==root->val){
            return root;
        }
        if(val<root->val){
            return searchBST(root->left,val);
        }
        return searchBST(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchbst(root,val);
    }
};