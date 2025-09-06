// Last updated: 6/9/2025, 10:37:05 am
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi && sum>=0){
                maxi=sum;
            }
            else if(sum<0){
                sum=0;
            }
        }
        if(maxi<*max_element(nums.begin(),nums.end())){
            maxi=*max_element(nums.begin(),nums.end());
        }
        return maxi;
    }
};