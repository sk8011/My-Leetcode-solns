// Last updated: 30/8/2025, 12:54:58 pm
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x=1;
        int n=INT_MAX;
        unordered_map<int,int> mp;
        for(int e:nums){
            mp[e]++;
        }
        while(mp[x]>0){
            x++;
        }
        return x;
    }
};