// Last updated: 29/12/2025, 8:23:25 pm
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
14    int maxDepth(TreeNode* node){
15        if(!node) return 0;
16        int maxLeft = maxDepth(node->left);
17        int maxRight = maxDepth(node->right);
18        return max(maxLeft, maxRight)+1;
19    }
20
21    void bfs(TreeNode* root, vector<TreeNode*> &vec){
22        queue<TreeNode*> qq;
23        qq.push(root);
24        while(!qq.empty()){
25            TreeNode* temp=qq.front();
26            qq.pop();
27            vec.push_back(temp);
28            if(temp->left){
29                qq.push(temp->left);
30            }
31            if(temp->right){
32                qq.push(temp->right);
33            }
34        }
35    }
36
37    int dfs(TreeNode* root, int &ans){
38        if(!root) return 0;
39        int left=dfs(root->left,ans);
40        int right=dfs(root->right,ans);
41        ans=max(ans,left+right);
42
43        return 1+max(left,right);
44    }
45
46    int diameterOfBinaryTree(TreeNode* root) {
47        int ans=0;
48        dfs(root,ans);
49        return ans;
50    }
51};