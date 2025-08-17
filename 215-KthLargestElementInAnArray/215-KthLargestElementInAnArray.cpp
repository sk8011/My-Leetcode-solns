// Last updated: 17/8/2025, 11:32:32 pm
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(),nums.end());
        sort_heap(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};