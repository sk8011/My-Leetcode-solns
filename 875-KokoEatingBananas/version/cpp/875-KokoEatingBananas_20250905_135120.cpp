// Last updated: 5/9/2025, 1:51:20 pm
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        if(n==1){
            return (piles[0]+h-1)/h;
        }
        int high=1000000000;
        int low=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int temp=0;
            bool exceed=false;
            for(int e:piles){
                temp+=(e+mid-1)/mid;
                if(temp>h){
                    exceed=true;
                    break;
                }
            }
            if(exceed){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};