// Last updated: 8/9/2025, 3:22:32 pm
class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> prev(n,0);
        prev[0]=0;
        for(int i=1;i<n;i++){
            prev[i]=max(prev[i-1],nums[i-1]);
        }
        vector<int> ah(n,0);
        ah[n-1]=0;
        for(int i=n-2;i>=0;i--){
            ah[i]=max(ah[i+1],nums[i+1]);
        }
        long long ans=0;
        for(int i=1;i<n-1;i++){
            if(prev[i]>nums[i] && ah[i]>nums[i]){
                ans++;
            }
        }
        return ans;
    }
};