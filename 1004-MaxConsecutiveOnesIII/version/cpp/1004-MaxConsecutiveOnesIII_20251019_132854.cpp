// Last updated: 19/10/2025, 1:28:54 pm
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zeros=0;
        int l=0,r=0;
        if(nums[0]==0) zeros++;
        int len=0;
        while(r<n){
            if(zeros>k){
                while(r<n && zeros>k){
                    if(nums[l]==0) zeros--;
                    if(r<n-1 && nums[r+1]==0) zeros++;
                    l++;
                    r++;
                }
            }
            if(r!=n && zeros<=k) len=max(len,r-l+1);
            r++;
            if(r<n && nums[r]==0) zeros++;
        }
        return len;
    }
};