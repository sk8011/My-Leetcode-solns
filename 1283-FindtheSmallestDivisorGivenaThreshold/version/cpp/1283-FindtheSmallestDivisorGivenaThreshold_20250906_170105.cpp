// Last updated: 6/9/2025, 5:01:05 pm
// Binary Search
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=1000000;
        int n=nums.size();
        int ans=INT_MAX;
        while(low<high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int e:nums){
                sum+=(e+mid-1)/mid;
            }
            if(sum<=threshold){
                high=mid;
                ans=min(high,ans);
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};