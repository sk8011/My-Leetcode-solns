// Last updated: 8/11/2025, 11:20:18 pm
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i+=3){
            if(nums[i]!=nums[i-1]) return nums[i-1];
        }
        return nums[n-1];
    }
};