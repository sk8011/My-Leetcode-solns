// Last updated: 8/11/2025, 11:31:15 pm
class Solution {
public:


    // amaaaaaaazing soln
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ones=(ones^nums[i])&~twos;
            twos=(twos^nums[i])&~ones;
        }
        return ones;
    }
};