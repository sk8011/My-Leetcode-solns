// Last updated: 5/11/2025, 5:45:33 pm
// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//     }
// };

class Solution {
public:
    void recur(int ind, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans){
        if(ind==-1){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[ind]);
        recur(ind-1,nums,temp,ans);
        temp.pop_back();

        while(ind>0 && nums[ind]==nums[ind-1]) ind--;
        
        recur(ind-1,nums,temp,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        recur(n-1,nums,temp,ans);
        return ans;
    }
};