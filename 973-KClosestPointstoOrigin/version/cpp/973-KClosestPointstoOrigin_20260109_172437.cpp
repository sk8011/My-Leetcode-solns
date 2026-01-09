// Last updated: 9/1/2026, 5:24:37 pm
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
4        multiset<vector<int>, compare> mset(points.begin(), points.end());
5        vector<vector<int>> ans;
6        copy_n(mset.begin(), K, back_inserter(ans));
7        return ans;
8    }
9private:
10    struct compare {
11        bool operator()(const vector<int>& p, const vector<int>& q) const {
12            return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
13        }
14    };
15};