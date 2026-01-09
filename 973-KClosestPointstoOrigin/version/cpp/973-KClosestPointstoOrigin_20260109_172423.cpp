// Last updated: 9/1/2026, 5:24:23 pm
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
4        priority_queue<vector<int>, vector<vector<int>>, compare> pq(points.begin(), points.end());
5        vector<vector<int>> ans;
6        for (int i = 0; i < K; i++) {
7            ans.push_back(pq.top());
8            pq.pop();
9        }
10        return ans;
11    }
12private:
13    struct compare {
14        bool operator()(vector<int>& p, vector<int>& q) {
15            return p[0] * p[0] + p[1] * p[1] > q[0] * q[0] + q[1] * q[1];
16        }
17    };
18};