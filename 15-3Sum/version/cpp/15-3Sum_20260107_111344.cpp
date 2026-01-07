// Last updated: 7/1/2026, 11:13:44 am
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        if(nums[0]==0 && nums[2]==0) return {{0,0,0}};
7        if(nums[0]>=0 || nums[n-1]<=0) return {};
8        vector<vector<int>> ans;
9        for(int i=0;i<n-2;i++){
10            if(i!=0 && nums[i]==nums[i-1]) continue;
11            int j=i+1,k=n-1;
12            while(j<k){
13                int sum=nums[i]+nums[j]+nums[k];
14                if(sum<0){
15                    j++;
16                }else if(sum>0){
17                    k--;
18                }else{
19                    ans.push_back({nums[i],nums[j],nums[k]});
20                    j++;
21                    k--;
22                    while(nums[j]==nums[j-1] && j<k) j++;
23                    while(nums[k]==nums[k+1] && j<k) k--;
24                }
25            }
26        }
27        return ans;
28    }
29};