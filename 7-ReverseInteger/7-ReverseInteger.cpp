// Last updated: 17/8/2025, 11:34:06 pm
class Solution {
public:
    int reverse(int x) {
        long int ans=0;
        int digit;
        do{
            digit=x%10;
            ans=ans*10+digit;
            x/=10;
        }while(abs(x)>0);
        if(x<0){
            if(abs(ans)>pow(2,31)){
                return 0;
            }
        }
        else if(x>=0){
            if(abs(ans)>pow(2,31)-1){
                return 0;
            }
        }
        if(x<0){
            return 0-ans;
        }
        return ans;
    }
};