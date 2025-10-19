// Last updated: 19/10/2025, 1:35:10 pm
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zeros=0;
        int l=0;
        int len=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0) zeros++;
            while(zeros>k){
                if(nums[l]==0) zeros--;
                l++;
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};