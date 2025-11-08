// Last updated: 9/11/2025, 12:25:42 am
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll = 0;
        for (int num : nums)
            xorAll ^= num;  // xorAll = a ^ b
        
        // Find rightmost set bit
        long long diffBit = xorAll & -xorAll;
        
        int a = 0, b = 0;
        for (int num : nums) {
            if (num & diffBit)
                a ^= num;  // one group
            else
                b ^= num;  // other group
        }
        if (a > b) swap(a, b);
        return {a, b};
    }
};