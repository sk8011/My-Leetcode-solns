// Last updated: 11/9/2025, 6:11:24 pm
class Solution {
public:
    int countWays(int i, int j, vector<vector<int>> &dp, vector<vector<int>> obs){
        if(i==0 && j==0) return 1;

        if(i<0 || j<0) return 0;

        for(auto vec:obs){
            if(i==vec[0] && j==vec[1]) return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int up=countWays(i-1,j,dp,obs);
        int left=countWays(i,j-1,dp,obs);

        return dp[i][j]=up+left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> obs;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1) obs.push_back({i,j});
            }
        }
        if(obstacleGrid[0][0]==1) return 0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return countWays(m-1,n-1,dp,obs);

    }
};