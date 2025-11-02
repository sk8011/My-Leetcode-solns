// Last updated: 2/11/2025, 9:26:38 pm
class Solution {
public:
    void recur(int ind, const vector<int>& nums, int target, int& ans){
        if(ind==-1){
            if(target==0) ans++;
            return;
        }
        recur(ind-1,nums,target+nums[ind],ans);
        recur(ind-1,nums,target-nums[ind],ans);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0;
        int n=nums.size();
        recur(n-1,nums,target,ans);
        return ans;
    }
};