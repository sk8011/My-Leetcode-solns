// Last updated: 17/8/2025, 11:33:29 pm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
        int aMax=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            aMax=max(aMax,nums[i]);
            if(sum>maxi && sum>=0){
                maxi=sum;
            }
            else if(sum<0){
                sum=0;
            }
            else if(sum<=maxi){
                continue;
            }
        }
        if(maxi<aMax){
            maxi=aMax;
        }
        return maxi;
    }
};