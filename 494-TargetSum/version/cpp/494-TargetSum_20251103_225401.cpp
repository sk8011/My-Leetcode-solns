// Last updated: 3/11/2025, 10:54:01 pm
class Solution {
public:
    int recur(int ind, const vector<int>& nums, int target, vector<vector<int>>& dp, int total){
        if(ind==-1){
            if(target==0) return 1;
            else return 0;
        }
        if (target + total < 0 || target + total > 2 * total) return 0;
        if(dp[ind][target+total]!=INT_MIN) return dp[ind][target+total];

        int right=recur(ind-1,nums,target+nums[ind],dp,total);
        int left=recur(ind-1,nums,target-nums[ind],dp,total);
        return dp[ind][target+total]=left+right;
    }

    int findTargetSumWays(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int total = 0;
        for (int e : nums) total += e;
        if(k>total || (total-k)%2!=0) return 0;
        int target=(total-k)/2;
        vector<vector<int>> dp(n,vector<int>(target+1,0));
        // for(int i=0;i<n;i++){
        //     dp[i][0]=1;
        // }
        dp[0][0]=1;
        if(nums[0]<=target) dp[0][nums[0]]=nums[0]==0?2:1;

        for(int i=1;i<n;i++){
            for(int j=0;j<=target;j++){
                int skip=dp[i-1][j];
                int take=0;
                if(j>=nums[i]) take=dp[i-1][j-nums[i]];
                dp[i][j]=skip+take;
            }
        }
        return dp[n-1][target];
        // return ans;
    }
};