// Last updated: 17/8/2025, 11:30:36 pm
class Solution {
public:
    int minTime(string s, vector<int>& order, int k) {
        int n = s.size();
        long long total = 1LL * n * (n + 1) / 2;

        auto isActive = [&](int t) -> bool {
            vector<bool> isStar(n, false);
            for (int i = 0; i < t; ++i) {
                isStar[order[i]] = true;
            }

            long long invalid = 0;
            int len = 0;
            for (int i = 0; i < n; ++i) {
                if (!isStar[i]) {
                    len++;
                } else {
                    if (len > 0) {
                        invalid += 1LL * len * (len + 1) / 2;
                        len = 0;
                    }
                }
            }
            if (len > 0) {
                invalid += 1LL * len * (len + 1) / 2;
            }

            long long valid = total - invalid;
            return valid >= k;
        };

        int lo = 0, hi = n, ans = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (isActive(mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        if(ans!=-1)return ans-1;
        return -1;
    }
};
