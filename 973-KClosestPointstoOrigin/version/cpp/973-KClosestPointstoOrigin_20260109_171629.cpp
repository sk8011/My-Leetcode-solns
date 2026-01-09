// Last updated: 9/1/2026, 5:16:29 pm
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        vector<pair<double,int>> arr;
5        int n=points.size();
6        int ind=0;
7        for(auto vec:points){
8            double dist=pow(vec[0],2)+pow(vec[1],2);
9            dist=sqrt(dist);
10            arr.push_back({dist,ind});
11            ind++;
12        }
13        sort(arr.begin(),arr.end());
14        vector<vector<int>> ans;
15        for(int i=0;i<k;i++){
16            ans.push_back(points[arr[i].second]);
17        }
18        return ans;
19    }
20};