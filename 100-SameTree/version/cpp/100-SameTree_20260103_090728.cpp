// Last updated: 3/1/2026, 9:07:28 am
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
14    bool isSameTree(TreeNode* p, TreeNode* q) {
15        if(!p || !q){
16            return p==q;
17        }
18        if(p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right)) return true;
19
20        return false;
21    }
22};