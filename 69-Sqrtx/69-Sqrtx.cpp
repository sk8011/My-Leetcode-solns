// Last updated: 17/8/2025, 11:33:17 pm
class Solution {
public:
    int mySqrt(int x) {
        for(int i=1;;i++){
            if(pow(i,2)>x){
                return i-1;
            }
        }
        return 0;
    }
};