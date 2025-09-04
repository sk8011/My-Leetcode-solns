// Last updated: 4/9/2025, 10:39:51 am
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int high=n-1;
        int low=0;

        while(high>=low){
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]>target){
                while(low<mid && nums[mid]==nums[low]) low++;
                if(nums[low]<=nums[mid] && nums[low]>target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }else{
                while(high>mid && nums[mid]==nums[high]) high--;
                if(nums[mid]<=nums[high] && target>nums[high]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
        return false;
    }
};
