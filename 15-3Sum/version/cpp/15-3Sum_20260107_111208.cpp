// Last updated: 7/1/2026, 11:12:08 am
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        if(nums[0]==0 && nums[2]==0) return {{0,0,0}};
7        if(n==3){
8            if(nums[0]+nums[1]+nums[2]==0) return {{nums[0],nums[1],nums[2]}};
9        }
10        if(nums[0]>=0 || nums[n-1]<=0) return {};
11        vector<vector<int>> ans;
12        for(int i=0;i<n-3;i++){
13            if(i!=0 && nums[i]==nums[i-1]) continue;
14            int j=i+1,k=n-1;
15            while(j<k){
16                int sum=nums[i]+nums[j]+nums[k];
17                if(sum<0){
18                    j++;
19                }else if(sum>0){
20                    k--;
21                }else{
22                    ans.push_back({nums[i],nums[j],nums[k]});
23                    j++;
24                    k--;
25                    while(nums[j]==nums[j-1] && j<k) j++;
26                    while(nums[k]==nums[k+1] && j<k) k--;
27                }
28            }
29        }
30        return ans;
31    }
32};