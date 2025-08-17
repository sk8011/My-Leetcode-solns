// Last updated: 17/8/2025, 11:31:16 pm
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        for(int el:nums){
            mp[el]++;
        }
        for(pair p:mp){
            if(p.second%2!=0){
                return false;
            }
        }
        return true;
    }
};