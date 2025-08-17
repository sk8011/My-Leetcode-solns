// Last updated: 17/8/2025, 11:30:44 pm
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if(sum==i){
                return i;
            }
            sum=0;
        }
        return -1;
    }
};