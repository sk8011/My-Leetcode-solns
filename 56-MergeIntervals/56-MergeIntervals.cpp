// Last updated: 17/8/2025, 11:33:24 pm
class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if (intervals.empty()) return ans;

        sort(intervals.begin(), intervals.end()); // sort by start time
        vector<int> temp = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= temp[1]) {
                // overlapping
                temp[1] = max(temp[1], intervals[i][1]);
            } else {
                // non-overlapping, push previous
                ans.push_back(temp);
                temp = intervals[i];
            }
        }

        ans.push_back(temp); // push the last interval
        return ans;
    }

};