// Last updated: 17/8/2025, 11:32:54 pm
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        for(int i=1; i<n; ++i)
            ans ^= nums[i]; //every element that appears twice becomes 0 leaving only the element appearing once
        return ans;
    }
};