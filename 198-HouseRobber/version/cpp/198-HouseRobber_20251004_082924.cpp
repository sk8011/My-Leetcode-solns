// Last updated: 4/10/2025, 8:29:24 am
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        int prev1=0;
        int prev2=nums[0];
        int curr;
        for(int i=1;i<n;i++){
            curr=max(prev2,prev1+nums[i]);
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};