// Last updated: 17/8/2025, 11:33:49 pm
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1,i=1;
        int len=nums.size();
        while(i<len){
            if(nums[i]!=nums[i-1]){
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