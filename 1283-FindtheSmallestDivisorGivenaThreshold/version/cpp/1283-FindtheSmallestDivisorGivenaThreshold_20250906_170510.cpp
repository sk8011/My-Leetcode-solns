// Last updated: 6/9/2025, 5:05:10 pm
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int e:nums){
                sum+=(e+mid-1)/mid;
            }
            if(sum<=threshold){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return high;
    }
};