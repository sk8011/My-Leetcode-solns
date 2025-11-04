// Last updated: 4/11/2025, 12:16:37 pm
class Solution {
public:
    const int prime = 1e9 + 7;
    int recur(int n1,string s,int n2,string t,vector<vector<int>>& dp){
        if(n1<0 || n2<0){
            return (n2<0)?1:0;
        }
        if(dp[n1][n2]!=-1) return dp[n1][n2];

        if(s[n1]==t[n2]){
            return dp[n1][n2]=recur(n1-1,s,n2,t,dp)+recur(n1-1,s,n2-1,t,dp);
        }
        else{
            return dp[n1][n2]=recur(n1-1,s,n2,t,dp);
        }
    }

    int numDistinct(string s, string t) {
        int n1 = s.size(), n2 = t.size();
        string ans;
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        
        for(int i=0;i<=n1;i++) dp[i][0]=1;

        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%prime;
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n1][n2];

        // return recur(n1-1,s,n2-1,t,dp);
    }
};