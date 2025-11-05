// Last updated: 5/11/2025, 3:28:44 pm
class Solution {
public:
    void recur(int index,int target,vector<int> &st,vector<vector<int>> &ans,vector<int> candidates){
        if(target==0){
            ans.push_back(st);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target){
                break;
            }
            st.push_back(candidates[i]);
            recur(i+1,target-candidates[i],st,ans,candidates);
            st.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> st;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        recur(0,target,st,ans,candidates);
        return ans;
    }
};