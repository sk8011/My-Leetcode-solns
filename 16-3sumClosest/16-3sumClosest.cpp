// Last updated: 17/8/2025, 11:33:55 pm
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX,ans;
        int n=nums.size();
        int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    temp=target-(nums[i]+nums[j]+nums[k]);
                    diff=min(diff,abs(temp));
                    if(diff==abs(temp)){
                        ans=target-temp;
                    }   
                }
            }
        }
        return ans;
    }
};