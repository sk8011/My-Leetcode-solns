// Last updated: 11/9/2025, 7:17:36 pm
class Solution {
public:

    int minSum(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid){
        if(i==0 && j==0){
            return grid[0][0];
        }
        if(i<0 || j<0) return 40001;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up=grid[i][j]+minSum(i-1,j,dp,grid);
        int left=grid[i][j]+minSum(i,j-1,dp,grid);

        return dp[i][j]=min(up,left);
    }


    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return minSum(m-1,n-1,dp,grid);
        // return sum+grid[0][0];
    }
};