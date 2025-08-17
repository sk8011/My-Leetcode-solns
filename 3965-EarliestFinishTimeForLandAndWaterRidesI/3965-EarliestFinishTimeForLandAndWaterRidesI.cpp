// Last updated: 17/8/2025, 11:30:27 pm
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int land = INT_MAX, water = INT_MAX;

        for (int i = 0; i < n; i++) {
            land = min(land, landStartTime[i] + landDuration[i]);
        }

        for (int j = 0; j < m; j++) {
            water = min(water, waterStartTime[j] + waterDuration[j]);
        }

        int ans1 = 0, ans2 = 0;
        ans1 += water;

        int ma = INT_MAX;
        for (int i = 0; i < n; i++) {
            int start = max(landStartTime[i], water);
            ma = min(ma, start - water + landDuration[i]);
        }
        ans1 += ma;

        ans2 += land;
        ma = INT_MAX;
        for (int j = 0; j < m; j++) {
            int start = max(waterStartTime[j], land);
            ma = min(ma, start - land + waterDuration[j]);
        }
        ans2 += ma;

        return min(ans1, ans2);
    }
};
