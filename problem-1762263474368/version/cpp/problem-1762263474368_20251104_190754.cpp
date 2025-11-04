// Last updated: 4/11/2025, 7:07:54 pm
class Solution {
public:
    int recur(int ind, int prev_index, int n, vector<int> arr, vector<vector<int>> dp){
        if(ind==n){
            return 0;
        }

        if(dp[ind][prev_index+1]!=-1) return dp[ind][prev_index+1];

        int skip=0+recur(ind+1,prev_index,n,arr,dp);

        int take=0;
        if(prev_index==-1 || arr[ind]>arr[prev_index]){
            take=1+recur(ind+1,ind,n,arr,dp);
        }
        return dp[ind][prev_index+1]=max(take,skip);

    }

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        // vector<vector<int>> dp(n,vector<int>(n+1,-1));
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int prev_index = ind - 1; prev_index >= -1; prev_index--) {
                int skip = dp[ind + 1][prev_index + 1];

                int take = 0;
                if (prev_index == -1 || nums[ind] > nums[prev_index])
                    take = 1 + dp[ind + 1][ind + 1];

                dp[ind][prev_index + 1] = max(skip, take);
            }
        }

        return dp[0][0];
    }
};