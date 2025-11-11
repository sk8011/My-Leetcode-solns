// Last updated: 11/11/2025, 7:17:18 pm
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3) return 0;
        vector<int> suffixMax(n,-1);

        suffixMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(height[i],suffixMax[i+1]);
        }

        int pref=height[0];
        int ans=0;
        for(int i=1;i<n-1;i++){
            pref=max(height[i],pref);
            if(height[i]<pref && height[i]<suffixMax[i+1]){
                ans+=min(pref,suffixMax[i+1])-height[i];
            }
        }
        return ans;
    }
};