// Last updated: 2/11/2025, 7:11:44 pm
class Solution {
public:
    int recur(int ind, vector<int> arr, int amount, vector<vector<int>>& dp){
        if(ind==0){
            if(amount%arr[ind]==0) return amount/arr[ind];
            else return 1e9;
        }

        if(dp[ind][amount]!=-1) return dp[ind][amount];

        int skip=0+recur(ind-1,arr,amount,dp);
        int take=INT_MAX;
        if(arr[ind]<=amount) take=1+recur(ind,arr,amount-arr[ind],dp);

        return dp[ind][amount]=min(skip,take);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        int ans=0;

        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0) dp[0][i]=i/coins[0];
            else dp[0][i]=1e9;
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int skip=0+dp[i-1][j];
                int take=INT_MAX;
                if(coins[i]<=j) take=1+dp[i][j-coins[i]];
                dp[i][j]=min(skip,take);
            }
        }
        ans=dp[n-1][amount];
        return ans==1e9?-1:ans;
    }
};