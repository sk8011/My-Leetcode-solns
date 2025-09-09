// Last updated: 9/9/2025, 10:14:12 am
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        int prev1=nums[0];
        int prev2,curr;
        for(int i=1;i<n-1;i++){
            int pick=nums[i];
            if(i>1){
                pick+=prev2;
            }
            int nonPick=prev1;
            curr=max(nonPick,pick);
            prev2=prev1;
            prev1=curr;
        }

        int temp=prev1;
        prev1=0;
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i>1){
                pick+=prev2;
            }
            int nonPick=prev1;
            curr=max(nonPick,pick);
            prev2=prev1;
            prev1=curr;
        }
        temp=max(prev1,temp);
        return temp;
    }
};