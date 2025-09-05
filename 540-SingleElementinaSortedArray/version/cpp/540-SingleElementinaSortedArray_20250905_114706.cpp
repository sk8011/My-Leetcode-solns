// Last updated: 5/9/2025, 11:47:06 am
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        while(low<high){
            int mid=(high+low)/2;
            if(mid%2!=0) mid--;
            if(nums[mid]==nums[mid+1]){
                low=mid+2;
            }else{
                high=mid;
            }
        }
        return nums[high];
    }
};