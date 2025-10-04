// Last updated: 4/10/2025, 10:16:44 am
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

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    dp[0][0]=grid[0][0];
                    continue;
                }
                int down=INT_MAX;
                int right=INT_MAX;
                if(i>0) down=grid[i][j]+dp[i-1][j];
                if(j>0) right=grid[i][j]+dp[i][j-1];

                dp[i][j]=min(down,right);
            }
        }

        return dp[m-1][n-1];

        // return minSum(m-1,n-1,dp,grid);
        // return sum+grid[0][0];
    }
};