// Last updated: 6/9/2025, 4:41:29 pm
// don't try to reach target from startValue. Take target to the startValue.
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int cnt=0;
        while(target>startValue){
            if(target%2!=0){
                target++;
                cnt++;
            }
            target/=2;
            cnt++;
        }
        cnt+=startValue-target;
        return cnt;
    }
};