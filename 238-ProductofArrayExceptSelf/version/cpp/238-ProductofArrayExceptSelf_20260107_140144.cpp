// Last updated: 7/1/2026, 2:01:44 pm
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        int prefix=1,suffix=1;
6        vector<int> ans;
7        for(int i=0;i<n;i++){
8            ans.push_back(prefix);
9            prefix*=nums[i];
10        }
11        for(int i=n-1;i>=0;i--){
12            ans[i]*=suffix;
13            suffix*=nums[i];
14        }
15        return ans;
16    }
17};