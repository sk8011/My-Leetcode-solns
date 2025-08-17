// Last updated: 17/8/2025, 11:31:42 pm
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int z=nums.size()-1;
        int a=0;
        if(target==nums[a]){
            return 0;
        }
        else if(target==nums[z]){
            return z;
        }
        int mid=(a+z)/2;
        while(z>a+1){
            if(target==nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                z=mid-1;
                if(nums[z]==target){
                    return z;
                }
            }
            else if(target>nums[mid]){
                a=mid+1;
                if(nums[a]==target){
                    return a;
                }
            }
            mid=(z+a)/2;
        }
        return -1;
    }
};