// Last updated: 3/11/2025, 8:29:49 pm
class Solution {
public:
    int recur(int ind, const vector<int>& nums, int target, vector<vector<int>>& dp, int total){
        if(ind==-1){
            if(target==0) return 1;
            else return 0;
        }
        if (target + total < 0 || target + total > 2 * total) return 0;
        if(dp[ind][target+total]!=INT_MIN) return dp[ind][target+total];

        int left=recur(ind-1,nums,target-nums[ind],dp,total);
        int right=recur(ind-1,nums,target+nums[ind],dp,total);
        return dp[ind][target+total]=left+right;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0;
        int n=nums.size();
        int total = 0;
        for (int e : nums) total += e;
        if(abs(target)>total) return 0;
        vector<vector<int>> dp(n,vector<int>(2*total+1,INT_MIN));
        return recur(n-1,nums,target,dp,total);
        // return ans;
    }
};