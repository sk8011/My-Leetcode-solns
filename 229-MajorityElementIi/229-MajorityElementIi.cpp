// Last updated: 17/8/2025, 11:32:25 pm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k=nums.size()/3;
        vector<int> ans;
        map<int,int> mp;
        for(int e:nums){
            mp[e]++;
        }
        for(pair p:mp){
            if(p.second>k){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};