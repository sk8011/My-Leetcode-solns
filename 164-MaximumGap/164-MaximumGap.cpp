// Last updated: 17/8/2025, 11:32:43 pm
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int diff=0;
        for(int i=0;i<nums.size()-1;i++){
            diff=max(diff,nums[i+1]-nums[i]);
        }
        return diff;
    }
};