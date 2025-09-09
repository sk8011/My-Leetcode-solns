// Last updated: 9/9/2025, 10:20:34 am
class Solution {
public:
    int func(vector<int> nums){
        int n=nums.size();
        vector<int> dp(n,-1);
        int prev1=nums[0];
        int prev2,curr;
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i>1){
                pick+=prev2;
            }
            int nonPick=prev1;
            curr=max(nonPick,pick);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    int solve(vector<int> nums,int n){
        vector<int> vec1(nums.begin()+1,nums.end());
        vector<int> vec2(nums.begin(),nums.begin()+n-1);
        int ans1=func(vec1);
        int ans2=func(vec2);
        return max(ans1,ans2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        return solve(nums,n);
    }
};