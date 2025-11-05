// Last updated: 5/11/2025, 12:55:11 pm
class Solution {
public:
    void recur(int ind, vector<int> nums, vector<int> temp, set<vector<int>>& ans){
        if(ind==-1){
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[ind]);
        recur(ind-1,nums,temp,ans);
        temp.pop_back();
        
        recur(ind-1,nums,temp,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        recur(n-1,nums,temp,ans);
        vector<vector<int>> ansR(ans.begin(),ans.end());
        return ansR;
    }
};