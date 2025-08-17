// Last updated: 17/8/2025, 11:31:04 pm
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int i = 0;
        int xx = x;
        vector<int> ans;
        while (i + k <= nums.size()) {
            map<int, int> mp;
            int sum = 0;
            for (int j = i; j < i + k; j++) {
                mp[nums[j]]++;
            }
            while (xx) {
                auto maxiVal = mp.begin();
                for (auto it = mp.begin(); it != mp.end(); it++) {
                    if (maxiVal->second < it->second) {
                        maxiVal = it;
                    }
                }
                auto maxiKey = maxiVal;
                for (auto it = mp.begin(); it != mp.end(); it++) {
                    if (it->second == maxiVal->second &&
                        it->first > maxiVal->first) {
                        maxiKey = it;
                    }
                }
                sum += (maxiKey->first) * (maxiKey->second);
                maxiKey->second = 0;
                xx--;
            }
            ans.push_back(sum);
            i += 1;
            xx = x;
        }
        return ans;
    }
};