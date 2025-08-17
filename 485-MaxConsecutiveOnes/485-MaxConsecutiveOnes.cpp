// Last updated: 17/8/2025, 11:31:55 pm
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int temp=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                temp++;
                count=max(count,temp);
            }else{
                temp=0;
            }
        }
        return count;
    }
};