// Last updated: 4/10/2025, 12:16:21 pm
class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>> dp(m,vector<int>(m,0));
        // int ans=INT_MAX;
        for(int i=0;i<m;i++){
            dp[m-1][i]=triangle[m-1][i];
        }
        for(int i=m-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                dp[i][j]=min(triangle[i][j]+dp[i+1][j],triangle[i][j]+dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};