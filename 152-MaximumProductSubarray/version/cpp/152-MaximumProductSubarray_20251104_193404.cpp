// Last updated: 4/11/2025, 7:34:04 pm
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        int n=nums.size();
        vector<int> preProd;
        int temp=1;
        for(int e:nums){
            if(e==0) temp=1;
            else temp*=e;
            if(e!=0) prod=max(temp,prod);
            else prod=max(prod,0);
        }
        temp=1;
        for(int i=n-1;i>=0;i--){
            int e=nums[i];
            if(e==0) temp=1;
            else temp*=e;
            if(e!=0) prod=max(temp,prod);
            else prod=max(prod,0);
        }
        return prod;
    }
};