// Last updated: 17/8/2025, 11:30:35 pm
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int swt=0;
        bool increasing=false;
        int n=nums.size();
        int i;
        for(i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                increasing=true;
                swt++;
            }
            else break;
        }
        cout<<i<<"\n";
        int j;
        if(increasing){
            for(j=i;j<n;j++){
                if(nums[j]<nums[j-1]){
                    increasing=false;
                    swt++;
                }
                else break;
            }
            cout<<j;
            int k;
            if(!increasing){
                for(k=j;k<n;k++){
                    if(nums[k]>nums[k-1]){
                        increasing=true;
                        swt++;
                    }
                    else break;
                }
            }
            if(swt>=3 && k==n && increasing) return true;
        }
        return false;
    }
};