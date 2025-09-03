// Last updated: 3/9/2025, 12:01:46 pm
// Just a spinoff of binary search
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        int ansLow=-1,ansHigh=-1;
        int ans;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                ansLow=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        high=n-1;
        low=0;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                high=mid-1;
            }else{
                ansHigh=mid;
                low=mid+1;
            }
        }
        if(ansLow!=-1 && ansHigh!=-1){
            if(nums[ansLow]==target && nums[ansHigh]==target) return {ansLow,ansHigh};
        }
        return {-1,-1};
    }
};