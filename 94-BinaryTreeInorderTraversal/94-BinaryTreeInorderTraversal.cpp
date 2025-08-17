// Last updated: 17/8/2025, 11:33:06 pm
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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root!=NULL){
            st.push(root);
        }
        while(!st.empty()){
            if(st.top()->left!=NULL){
                st.push(st.top()->left);
            }else{
                TreeNode* temp=st.top();
                ans.push_back(temp->val);
                st.pop();
                if(temp->right!=NULL){
                    st.push(temp->right);
                }else{
                    if(st.empty()){
                        break;
                    }
                    st.top()->left=NULL;
                }
            }
        }
        return ans;
    }
};