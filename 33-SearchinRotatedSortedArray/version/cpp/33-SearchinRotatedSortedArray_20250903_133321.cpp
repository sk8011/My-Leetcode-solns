// Last updated: 3/9/2025, 1:33:21 pm
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int high=n-1;
        int low=0;

        while(high>=low){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                if(nums[low]<=nums[mid] && nums[low]>target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }else{
                if(nums[mid]<=nums[high] && target>nums[high]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
};