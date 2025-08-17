// Last updated: 17/8/2025, 11:34:14 pm
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;
        int temp;
        for(int i=0;i<n;i++){
            temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                return {i,mp[temp]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};