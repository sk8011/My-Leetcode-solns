// Last updated: 4/11/2025, 7:40:01 pm
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=INT_MIN;
        int n=nums.size();
        int pre=1,suf=1;
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre*=nums[i];
            suf*=nums[n-i-1];

            prod=max(prod,max(pre,suf));
        }
        return prod;
    }
};