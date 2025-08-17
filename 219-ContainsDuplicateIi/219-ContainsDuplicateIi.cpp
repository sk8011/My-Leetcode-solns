// Last updated: 17/8/2025, 11:32:31 pm
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int temp,diff=k+1;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()==nums.size()){
            return false;
        }
        for(int i=0;i<nums.size();i++){
            temp=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==temp){
                    diff=min(diff,j-i);
                    if(diff<=k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};