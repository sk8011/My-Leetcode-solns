// Last updated: 29/12/2025, 7:20:33 pm
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
37    int diameterOfBinaryTree(TreeNode* root) {
38        vector<TreeNode*> vec;
39        bfs(root,vec);
40        int ans=0;
41        for(auto t:vec){
42            int lh=(t->left)?(maxDepth(t->left)):0;
43            int rh=(t->right)?(maxDepth(t->right)):0;
44            ans=max(ans,rh+lh);
45        }
46        return ans;
47    }
48};