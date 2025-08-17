// Last updated: 17/8/2025, 11:33:45 pm
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool check=false;
        int n=nums.size();
        int temp=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]<=nums[i-1]){}
            else{
                temp=i-1;
                break;
            }
        }
        if(temp==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int y;
        int x=INT_MAX;
        for(int j=n-1;j>temp;j--){
            if(nums[j]>nums[temp]){
                swap(nums[j],nums[temp]);
                break;
            }
        }
        reverse(nums.begin()+temp+1,nums.end());
    }
};