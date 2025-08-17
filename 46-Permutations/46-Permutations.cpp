// Last updated: 17/8/2025, 11:33:35 pm
class Solution {
public:
    void recur(int index, vector<int> nums, int n, vector<vector<int>> &ans){
        if(index>=n){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<n;i++){
            swap(nums[index],nums[i]);
            recur(index+1,nums,n,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        recur(0,nums,n,ans);
        return ans;
    }
};