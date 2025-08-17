// Last updated: 17/8/2025, 11:30:34 pm
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int maxLen = 0;
        sort(nums.begin(),nums.end());
        int left = 0;

        for (int right = 0; right < n; ++right) {
            while (nums[right] > (long long)k * nums[left]) {
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }

        return n - maxLen;
    }
};