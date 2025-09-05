// Last updated: 5/9/2025, 1:44:38 pm
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        if(n==1){
            return (piles[0]+h-1)/h;
        }
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        int ans=INT_MAX;
        if(n==h){
            return high;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int temp=0;
            bool exceed=false;
            for(int e:piles){
                temp+=(e+mid-1)/mid;
                if(temp>h){
                    exceed=true;
                    break;
                }
            }
            if(temp<=h){
                ans=min(ans,mid);
            }
            if(exceed){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};