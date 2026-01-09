// Last updated: 9/1/2026, 5:21:34 pm
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        
5        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> coordinates;
6        
7        for(auto& p : points){
8            int value = p[0] * p[0] + p[1] * p[1];
9            pair<int, vector<int>> temp = {value, p};
10            coordinates.push(temp);
11        }
12        
13        vector<vector<int>> ans;
14        while(k--){
15            ans.push_back(coordinates.top().second);
16            coordinates.pop();
17        }
18        
19        return ans;
20    }
21};