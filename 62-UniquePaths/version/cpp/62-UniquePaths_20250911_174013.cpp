// Last updated: 11/9/2025, 5:40:13 pm
class Solution {
public:
    int countWays(int i, int j, vector<vector<int>> &dp, int m, int n){
        if(i==m-1 && j==n-1) return 1;

        if(i>m-1 || j>n-1) return 0;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int down=countWays(i+1,j,dp,m,n);
        int right=countWays(i,j+1,dp,m,n);

        return dp[i][j]=down+right;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return countWays(0,0,dp,m,n);
    }
};