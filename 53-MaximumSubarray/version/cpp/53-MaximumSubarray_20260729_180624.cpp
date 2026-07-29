// Last updated: 29/7/2026, 6:06:24 pm
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxi=INT_MIN;
5        int sum=0;
6        
7        for(int i=0;i<nums.size();i++){
8            sum+=nums[i];
9            maxi=max(maxi,sum);
10            if(sum<0){
11                sum=0;
12            }
13        }
14
15        return maxi;
16    }
17};