// Last updated: 17/8/2025, 11:32:04 pm
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n1=nums1.size(),n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> temp;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                j++;
            }else if(nums2[j]>nums1[i]){
                i++;
            }else{
                if(temp.empty() || temp[temp.size()-1]!=nums1[i]) temp.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return temp;
    }
};