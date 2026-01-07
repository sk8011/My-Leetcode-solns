// Last updated: 7/1/2026, 12:53:29 pm
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        if(nums[0]>=0 && nums[0]>target) return {};
7        if(nums[n-1]<=0 && target>nums[n-1]) return {};
8        vector<vector<int>> ans;
9        int i=0;
10        while(i<n-3){
11            if(i!=0 && nums[i]==nums[i-1]){
12                i++;
13                continue;
14            }
15            int j=i+1;
16            while(j<n-2){
17                if(j!=i+1 && nums[j]==nums[j-1]){
18                    j++;
19                    continue;
20                }
21                int k=j+1;
22                int l=n-1;
23                while(k<l){
24                    long long int sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
25                    if(sum>target){
26                        l--;
27                    }else if(sum<target){
28                        k++;
29                    }else{
30                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
31                        k++;
32                        l--;
33                        while(nums[k]==nums[k-1] && k<l) k++;
34                        while(nums[l]==nums[l+1] && k<l) l--;
35                    }
36                }
37                j++;
38            }
39            i++;
40        }
41        return ans;
42    }
43};