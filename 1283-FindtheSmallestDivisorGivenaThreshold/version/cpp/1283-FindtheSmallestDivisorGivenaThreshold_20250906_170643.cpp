// Last updated: 6/9/2025, 5:06:43 pm
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n=nums.size();
       int mini=1;
       int maxi=INT_MIN;
       int ans;
       for(int i=0;i<n;i++){
        // mini=min(mini,nums[i]);
        maxi=max(maxi,nums[i]);
       }
       int low=mini;
       int high=maxi;
       while(low<=high){
        long long mid=low+(high-low)/2;
        int count=0;
        for(int i=0;i<n;i++){
            count+=(nums[i]+mid-1)/mid;
        }
        if(count<=threshold){
            high=mid-1;
            ans=mid;

        }
        else{
            low=mid+1;
        }
       }
       return ans;

    }
};