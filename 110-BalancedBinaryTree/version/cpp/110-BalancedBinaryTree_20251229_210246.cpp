// Last updated: 29/12/2025, 9:02:46 pm
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void dfs(TreeNode* root, vector<TreeNode*> &vec){
15        stack<TreeNode*> st;
16        st.push(root);
17        while(!st.empty()){
18            TreeNode* temp=st.top();
19            st.pop();
20            vec.push_back(temp);
21            if(temp->left!=NULL) st.push(temp->left);
22            if(temp->right!=NULL) st.push(temp->right);
23
24        }
25    }
26
27    int maxDepth(TreeNode* node){
28        if(!node) return 0;
29        int maxLeft = maxDepth(node->left);
30        int maxRight = maxDepth(node->right);
31        return max(maxLeft, maxRight)+1;
32    }
33
34
35    bool isBalanced(TreeNode* root) {
36        if(!root) return true;
37        vector<TreeNode*> vec;
38        dfs(root,vec);
39        for(auto t:vec){
40            int l=(t->left)?maxDepth(t->left):0;
41            int r=(t->right)?maxDepth(t->right):0;
42            if(abs(l-r)>1) return false;
43        }
44        return true;
45    }
46};