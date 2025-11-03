// Last updated: 3/11/2025, 11:11:32 pm
class Solution {
public:
    int recur(int ind, int amount, const vector<int>& coins, vector<vector<int>>& dp){
        if(amount<=0 || ind==-1){
            if(amount==0) return 1;
            return 0;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];

        int curr=recur(ind,amount-coins[ind],coins,dp);
        int move=recur(ind-1,amount,coins,dp);
        return dp[ind][amount]=curr+move;
    }

    int change(int amount, vector<int>& coins) {
        int ans=0;
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return recur(n-1,amount,coins,dp);
    }
};