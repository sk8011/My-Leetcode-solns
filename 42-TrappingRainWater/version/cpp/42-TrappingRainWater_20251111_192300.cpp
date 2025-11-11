// Last updated: 11/11/2025, 7:23:00 pm
// this is the most optimal solution
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3) return 0;
        int ans=0;
        int l=0;
        int r=n-1;
        int lMax=0;
        int rMax=0;

        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]<lMax){
                    ans+=lMax-height[l];
                }else{
                    lMax=height[l];
                }
                l++;
            }else{
                if(height[r]<rMax){
                    ans+=rMax-height[r];
                }else{
                    rMax=height[r];
                }
                r--;
            }
        }

        return ans;
    }
};