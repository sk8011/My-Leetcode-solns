// Last updated: 10/10/2025, 12:40:23 am
class Solution {
public:
    int recur(int ind1,string s1,int ind2,string s2,vector<vector<int>> dp){
        if(ind1<0 || ind2<0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2]){
            return dp[ind1][ind2]=1+recur(ind1-1,s1,ind2-1,s2,dp);
        }
        else{
            return dp[ind1][ind2]=max(recur(ind1-1,s1,ind2,s2,dp),recur(ind1,s1,ind2-1,s2,dp));
        }
        return 0;
    }


    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size(), n2 = text2.size();
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));

        for (int i = 1; i <= n1; i++) {
            for (int j = 1; j <= n2; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n1][n2];
    }

};