// Last updated: 19/6/2026, 11:24:44 am
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
14    void dfs(TreeNode* root, int& ans, vector<int> path){
15        if(!root) return;
16
17        path.push_back(root->val);
18
19        if(!root->left && !root->right){
20            long long int mul=1;
21            for(int i=path.size()-1;i>=0;i--){
22                ans+=mul*path[i];
23                mul*=10;
24            }
25        }
26
27        dfs(root->left,ans,path);
28        dfs(root->right,ans,path);
29
30        path.pop_back();
31    }
32
33    int sumNumbers(TreeNode* root) {
34        int ans=0;
35        vector<int> path;
36        dfs(root,ans,path);
37        return ans;
38    }
39};