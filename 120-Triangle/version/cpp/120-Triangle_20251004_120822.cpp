// Last updated: 4/10/2025, 12:08:22 pm
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
        int upLeft=grid[i][j]+minSum(i-1,j-1,dp,grid);
        int left=grid[i][j]+minSum(i,j-1,dp,grid);

        return dp[i][j]=min(upLeft,left);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<vector<int>> dp(m,vector<int>(n,INT_MAX));
        // int ans=INT_MAX;
        dp[0][0]=triangle[0][0];
        for(int i=1;i<m;i++){
            for(int j=0;j<triangle[i].size();j++){
                int prev=INT_MAX,curr=INT_MAX;
                if(j>0) prev=triangle[i][j]+dp[i-1][j-1];
                if(j<triangle[i].size()-1) curr=triangle[i][j]+dp[i-1][j];
                dp[i][j]=min(prev,curr);
            }
        }
        int ans=*min_element(dp[m-1].begin(),dp[m-1].end());
        return ans;
    }
};