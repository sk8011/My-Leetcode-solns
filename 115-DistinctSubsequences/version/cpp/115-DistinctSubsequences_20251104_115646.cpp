// Last updated: 4/11/2025, 11:56:46 am
class Solution {
public:
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
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        return recur(n1-1,s,n2-1,t,dp);
    }
};