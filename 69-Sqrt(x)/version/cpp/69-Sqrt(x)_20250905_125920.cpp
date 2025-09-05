// Last updated: 5/9/2025, 12:59:20 pm
// binary search solution
class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;
        long long ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(1LL*mid*mid<=x){
                ans=max(ans,mid);
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};