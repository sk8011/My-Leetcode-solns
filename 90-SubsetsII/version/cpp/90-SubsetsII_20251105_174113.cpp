// Last updated: 5/11/2025, 5:41:13 pm
// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//     }
// };

class Solution {
public:
    void recur(int ind, vector<int> nums, vector<int> temp, set<vector<int>>& ans){
        if(ind==-1){
            vector<int> t=temp;
            sort(t.begin(),t.end());
            ans.insert(t);
            return;
        }

        temp.push_back(nums[ind]);
        recur(ind-1,nums,temp,ans);
        temp.pop_back();
        
        recur(ind-1,nums,temp,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        recur(n-1,nums,temp,ans);
        vector<vector<int>> ansR(ans.begin(),ans.end());
        return ansR;
    }
};