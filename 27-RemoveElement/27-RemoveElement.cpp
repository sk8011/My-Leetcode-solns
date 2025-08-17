// Last updated: 17/8/2025, 11:33:48 pm
#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=count(nums.begin(),nums.end(),val);
        sort(nums.begin(),nums.end());
        int i,a=nums.size();
        for(i=0;i<a;i++){
            if(nums[i]==val){
                break;
            }
        }
        int j=a-(i+k);
        while(j){
           nums[i]=nums[i+k];
           i++;
           j--;
        }
        j=a-(i+k);
        while(j){
            nums.pop_back();
            j--;
        }
        return a-k;
    }
};