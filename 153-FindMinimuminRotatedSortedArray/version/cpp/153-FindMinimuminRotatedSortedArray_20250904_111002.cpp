// Last updated: 4/9/2025, 11:10:02 am
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        int ans=min(nums[0],nums[n-1]);
        while(high>=low){
            int mid=(low+high)/2;
            if(mid==0 || mid==n-1) break;
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) return nums[mid];
            else if(nums[mid]>nums[high]){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return ans;
    }
};