// Last updated: 3/9/2025, 1:01:38 pm
// crazyyyy how I solved it. I'm almost godly, huh?
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
                if(nums[low]>nums[mid]){
                    high=mid-1;
                }else{
                    if(nums[low]>target){
                        low=mid+1;
                    }else{
                        high=mid-1;
                    }
                }
            }else{
                if(nums[mid]>nums[high]){
                    low=mid+1;
                }else{
                    if(target>nums[high]){
                        high=mid-1;
                    }else{
                        low=mid+1;
                    }
                }
            }
        }
        return -1;
    }
};