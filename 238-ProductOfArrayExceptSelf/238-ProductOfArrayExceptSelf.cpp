// Last updated: 17/8/2025, 11:32:20 pm
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n,0);
        int mul=1;
        int i0;
        bool exists=false;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                exists=true;
                i0=i;
            }
            else{
                mul*=nums[i];
            }
        }

        if(exists){
            if(count(nums.begin(),nums.end(),0)>1){}
            else{
                ans[i0]=mul;
            }
        }

        else{
            for(int i=0;i<n;i++){
                ans[i]=mul/nums[i];
            }
        }
        return ans;
    }
};