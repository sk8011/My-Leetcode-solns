// Last updated: 17/8/2025, 11:32:41 pm
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>target-nums[0]){
        //         len=i+1;
        //         break;
        //     }
        // }
        int prev=0,next=len-1;

        while(next>prev){
            if(nums[prev]+nums[next]==target){
                return {prev+1,next+1};
            }else{
                if(nums[prev]+nums[next]>target){
                    next--;
                }else{
                    prev++;
                }
            }
        }
        return {};
    }
};