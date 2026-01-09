// Last updated: 9/1/2026, 5:24:04 pm
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
4        int l = 0, r = points.size() - 1;
5        while (true) {
6            int p = partition(points, l, r);
7            if (p == K - 1) {
8                break;
9            }
10            if (p < K - 1) {
11                l = p + 1;
12            } else {
13                r = p - 1;
14            }
15        }
16        return vector<vector<int>>(points.begin(), points.begin() + K);
17    }
18private:
19    bool farther(vector<int>& p, vector<int>& q) {
20        return p[0] * p[0] + p[1] * p[1] > q[0] * q[0] + q[1] * q[1];
21    }
22    
23    bool closer(vector<int>& p, vector<int>& q) {
24        return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
25    }
26    
27    int partition(vector<vector<int>>& points, int left, int right) {
28        int pivot = left, l = left + 1, r = right;
29        while (l <= r) {
30            if (farther(points[l], points[pivot]) && closer(points[r], points[pivot])) {
31                swap(points[l++], points[r--]);
32            }
33            if (!farther(points[l], points[pivot])) {
34                l++;
35            }
36            if (!closer(points[r], points[pivot])) {
37                r--;
38            }
39        }
40        swap(points[pivot], points[r]);
41        return r;
42    }
43};