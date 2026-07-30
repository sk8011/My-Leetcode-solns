// Last updated: 30/7/2026, 6:45:25 am
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int k=nums.size()/3;
5        unordered_set<int> ans;
6        map<int,int> mp;
7        for(int e:nums){
8            mp[e]++;
9            if(mp[e]>k){
10                ans.insert(e);
11            }
12        }
13        vector<int> temp(ans.begin(),ans.end());
14        return temp;
15    }
16};