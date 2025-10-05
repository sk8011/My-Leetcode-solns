// Last updated: 5/10/2025, 10:52:00 am
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int e:nums) sum+=e;
        if(sum%2!=0) return false;
        int k=sum;
        int n=nums.size();
        vector<vector<bool>> dp(n,vector<bool>(k+1,0));
    
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<k) dp[0][nums[0]]=true;

        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                bool notTake=dp[i-1][j];
                bool take=false;
                if(nums[i]<=j) take=dp[i-1][j-nums[i]];
                dp[i][j]=take | notTake;
            }
        }
        return dp[n-1][k/2];
    }
};