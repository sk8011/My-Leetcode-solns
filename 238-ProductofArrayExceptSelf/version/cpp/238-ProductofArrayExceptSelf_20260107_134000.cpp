// Last updated: 7/1/2026, 1:40:00 pm
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> prefix(n,1),suffix(n,1);
6        prefix[0]=nums[0];
7        suffix[n-1]=nums[n-1];
8        for(int i=1;i<n;i++){
9            prefix[i]=prefix[i-1]*nums[i];
10            suffix[n-i-1]=suffix[n-i]*nums[n-i-1];
11            // cout<<prefix[i]<<" ";
12        }
13        vector<int> ans;
14        for(int i=0;i<n;i++){
15            if(i==0) ans.push_back(suffix[i+1]);
16            else if(i==n-1) ans.push_back(prefix[i-1]);
17            else ans.push_back(prefix[i-1]*suffix[i+1]);
18        }
19        return ans;
20    }
21};