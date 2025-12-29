// Last updated: 29/12/2025, 8:25:34 pm
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
14    vector<vector<int>> ans;
15    queue<TreeNode*> qq;
16    void bfs(TreeNode* root){
17        if(root!=NULL){
18            qq.push(root);
19        }
20        vector<int> lvl;
21        int temp=1;
22        int i=0;
23        int c=0;
24        while(!qq.empty()){
25            while(i<temp){
26                if(qq.front()->left!=NULL){
27                    qq.push(qq.front()->left);
28                    c++;
29                }
30                if(qq.front()->right!=NULL){
31                    qq.push(qq.front()->right);
32                    c++;
33                }
34                lvl.push_back(qq.front()->val);
35                qq.pop();
36                i++;
37            }
38            temp=c;
39            i=0;
40            c=0;
41            ans.push_back(lvl);
42            lvl.clear();
43        }
44    }
45
46    int maxDepth(TreeNode* root){
47        if(!root) return 0;
48
49        return 1+max(maxDepth(root->left),maxDepth(root->right));
50    }
51    // int maxDepth(TreeNode* root) {
52    //     bfs(root);
53    //     return ans.size();
54    // }
55};