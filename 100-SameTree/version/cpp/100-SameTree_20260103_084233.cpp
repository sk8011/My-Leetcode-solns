// Last updated: 3/1/2026, 8:42:33 am
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
14    vector<int> inorder(TreeNode *temp,vector<int>& ans){
15        if (temp == nullptr) return ans;
16
17        inorder(temp->left, ans);
18        if(ans.size() && temp->val==ans[ans.size()-1]) ans.push_back(temp->val+10000+1);
19        else ans.push_back(temp->val);
20        inorder(temp->right, ans);
21
22        return ans;
23    }
24    vector<int> preorder(TreeNode *temp,vector<int>& ans){
25        if(temp==nullptr) return ans;
26
27        if(ans.size() && temp->val==ans[ans.size()-1]) ans.push_back(temp->val+10000+1);
28        else ans.push_back(temp->val);
29        preorder(temp->left,ans);
30        preorder(temp->right,ans);
31        return ans;
32    }
33
34    bool isSameTree(TreeNode* p, TreeNode* q) {
35        if(!p || !q){
36            if(!p && !q) return true;
37            return false;
38        }
39        queue<TreeNode*> qu1,qu2;
40        qu1.push(p);
41        qu2.push(q);
42        while(!qu1.empty() && !qu2.empty()){
43            TreeNode* temp1=qu1.front();
44            TreeNode* temp2=qu2.front();
45            int t1=-10000;
46            int t2=-10000;
47            if(temp1) t1=temp1->val;
48            if(temp2) t2=temp2->val;
49            if(t1!=t2) return false;
50            qu1.pop();
51            qu2.pop();
52            if(temp1){
53                qu1.push(temp1->left);
54                qu1.push(temp1->right);
55            }
56            if(temp2){
57                qu2.push(temp2->left);
58                qu2.push(temp2->right);
59            }
60        }
61        return true;
62    }
63};