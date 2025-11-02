// Last updated: 2/11/2025, 6:45:29 pm
class Solution {
public:
    int recur(int ind, vector<int> arr, int target, vector<vector<int>>& dp){
        if(ind==0){
            if(target%arr[ind]==0) return target/arr[ind];
            else return 1e9;
        }

        if(dp[ind][target]!=-1) return dp[ind][target];

        int skip=0+recur(ind-1,arr,target,dp);
        int take=INT_MAX;
        if(arr[ind]<=target) take=1+recur(ind,arr,target-arr[ind],dp);

        return dp[ind][target]=min(skip,take);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        
        int ans=recur(n-1,coins,amount,dp);
        return ans==1e9?-1:ans;
    }
};