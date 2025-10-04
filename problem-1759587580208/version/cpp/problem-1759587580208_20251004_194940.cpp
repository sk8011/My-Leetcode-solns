// Last updated: 4/10/2025, 7:49:40 pm
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int a=INT_MAX,b=INT_MAX,c=INT_MAX;
                if(j>0) a=dp[i-1][j-1];
                b=dp[i-1][j];
                if(j<n-1) c=dp[i-1][j+1];
                dp[i][j]=min(a,min(b,c))+matrix[i][j];
            }
        }
        int ans=*min_element(dp[n-1].begin(),dp[n-1].end());
        return ans;
    }
};