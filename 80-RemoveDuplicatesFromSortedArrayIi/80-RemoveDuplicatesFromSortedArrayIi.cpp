// Last updated: 17/8/2025, 11:33:09 pm
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=2,i=2;
        int len=nums.size();
        if(len<=2){
            return len;
        }
        while(i<len){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index++;
                i++;
            }
            else if(nums[i]==nums[index-1] && nums[i]!=nums[index-2]){
                nums[index]=nums[i];
                index++;
                i++;
            }
            else{
                i++;
            }
        }
        return index;
    }
};