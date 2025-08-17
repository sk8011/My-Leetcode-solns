// Last updated: 17/8/2025, 11:31:54 pm
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        bool pushed=false;
        vector<int> ans;
        for(int i:nums1){
            pushed=false;
            for(int j=0;j<nums2.size();j++){
                if(i==nums2[j]){
                    for(int k=j;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            ans.push_back(nums2[k]);
                            pushed=true;
                            break;
                        }
                    }
                    if(!pushed){
                        ans.push_back(-1);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};