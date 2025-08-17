// Last updated: 17/8/2025, 11:32:17 pm
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int aSum=(n+1)*n/2;
        return aSum-sum;
    }
};