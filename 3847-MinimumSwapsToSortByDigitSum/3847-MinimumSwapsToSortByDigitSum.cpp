// Last updated: 17/8/2025, 11:30:46 pm
class Solution {
public:
     int digitSum(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<tuple<int, int, int>> sortedKey;
        for (int i = 0; i < n; ++i) {
            sortedKey.emplace_back(digitSum(nums[i]), nums[i], i);
        }
        sort(sortedKey.begin(), sortedKey.end());
        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; ++i) {
            if (visited[i] || get<2>(sortedKey[i]) == i)
                continue;

            int cycle_size = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = get<2>(sortedKey[j]);
                ++cycle_size;
            }

            if (cycle_size > 1)
                swaps += (cycle_size - 1);
        }

        return swaps;
    }
};