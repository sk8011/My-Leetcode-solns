// Last updated: 30/8/2025, 12:44:57 pm
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x=1;
        sort(nums.begin(),nums.end());
        for(int e:nums){
            if(e==x) x++;
        }
        return x;
    }
};