// Last updated: 11/11/2025, 7:00:19 pm
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3) return 0;
        vector<int> prefixMax(n,-1);
        vector<int> suffixMax(n,-1);
        prefixMax[0]=height[0];
        for(int i=1;i<n;i++){
            prefixMax[i]=max(height[i],prefixMax[i-1]);
        }
        suffixMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(height[i],suffixMax[i+1]);
        }

        int ans=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<prefixMax[i-1] && height[i]<suffixMax[i+1]){
                ans+=min(prefixMax[i-1],suffixMax[i+1])-height[i];
            }
        }
        return ans;
    }
};