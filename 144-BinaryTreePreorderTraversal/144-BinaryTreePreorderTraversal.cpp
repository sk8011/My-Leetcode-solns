// Last updated: 17/8/2025, 11:32:50 pm
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
    vector<int> ans;
    stack<TreeNode*> st;
    void preorder(TreeNode* root){
        if(root!=NULL){
            st.push(root);
        }
        while(!st.empty()){
            TreeNode* a=st.top();
            st.pop();
            if(a->right!=NULL){
                st.push(a->right);
            }
            if(a->left!=NULL){
                st.push(a->left);
            }
            ans.push_back(a->val);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};