// Last updated: 7/1/2026, 1:25:36 pm
1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
4        int n=intervals.size();
5        if(n==0){
6            return {newInterval};
7        }
8        vector<vector<int>> ans;
9        if(newInterval[1]<intervals[0][0]){
10            intervals.insert(intervals.begin(),newInterval);
11            return intervals;
12        }
13        bool inserted=false;
14        for(int i=0;i<n;i++){
15            if(newInterval[0]>intervals[i][1]){
16                ans.push_back(intervals[i]);
17            }else{
18                if(newInterval[1]<intervals[i][0]){
19                    if(!inserted) ans.push_back(newInterval);
20                    ans.push_back(intervals[i]);
21                    inserted=true;
22                }else{
23                    newInterval[0]=min(newInterval[0],intervals[i][0]);
24                    newInterval[1]=max(newInterval[1],intervals[i][1]);
25                }
26            }
27        }
28        if(!inserted){
29            ans.push_back(newInterval);
30        }
31        return ans;
32    }
33};