// Last updated: 7/1/2026, 12:52:21 pm
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        map<int,int> mp;
5        vector<int> newNums;
6        for(int i:nums){
7            mp[i]++;
8            if(mp[i]<5){
9                newNums.push_back(i);
10            }
11        }
12        nums=newNums;
13        newNums.clear();
14        vector<vector<int>> ans;
15        vector<int> vec;
16        int n=nums.size();
17        long long int temp;
18        if(n>3){
19            for(int i=0;i<n;i++){
20                for(int j=i+1;j<n;j++){
21                    for(int k=j+1;k<n;k++){
22                        for(int l=k+1;l<n;l++){
23                            temp=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
24                            if(temp==target){
25                                vec={nums[i],nums[j],nums[k],nums[l]};
26                                sort(vec.begin(),vec.end());
27                                ans.push_back(vec);
28                            }
29                        }
30                    }
31                }
32            }
33        }
34
35        set<vector<int>> sv;
36        for(vector<int> v:ans){
37            sv.insert(v);
38        }
39        ans.clear();
40        for(vector<int> v:sv){
41            ans.push_back(v);
42        }
43
44        return ans;
45    }
46};