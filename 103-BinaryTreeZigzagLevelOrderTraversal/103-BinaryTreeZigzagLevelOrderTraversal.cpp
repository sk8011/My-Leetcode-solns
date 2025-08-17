// Last updated: 17/8/2025, 11:33:03 pm
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
    vector<vector<int>> ans;
    queue<TreeNode*> qq;
    void bfs(TreeNode* root){
        if(root!=NULL){
            qq.push(root);
        }
        vector<int> lvl;
        int temp=1;
        int i=0;
        int c=0;
        while(!qq.empty()){
            while(i<temp){
                if(qq.front()->left!=NULL){
                    qq.push(qq.front()->left);
                    c++;
                }
                if(qq.front()->right!=NULL){
                    qq.push(qq.front()->right);
                    c++;
                }
                lvl.push_back(qq.front()->val);
                qq.pop();
                i++;
            }
            temp=c;
            i=0;
            c=0;
            ans.push_back(lvl);
            lvl.clear();
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bfs(root);
        for(int i=0;i<ans.size();i++){
            if(i%2!=0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};