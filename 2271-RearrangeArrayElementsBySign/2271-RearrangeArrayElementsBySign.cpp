// Last updated: 17/8/2025, 11:31:17 pm
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int currN=0,currP=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[2*currN+1]=nums[i];
                currN++;
            }else{
                ans[2*currP]=nums[i];
                currP++;
            }
        }

        return ans;
    }
};