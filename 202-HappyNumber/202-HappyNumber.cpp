// Last updated: 17/8/2025, 11:32:37 pm
class Solution {
public:
    bool isHappy(int n) {
        vector<int> tempV;
        while(n!=1){
            int temp=n;
            while(temp>0){
                tempV.push_back(temp%10);
                temp/=10;
            }
            n=0;
            for(int i:tempV){
                n+=pow(i,2);
            }
            if(n>1 && n<7){
                return false;
            }else if(n==8 or n==9){
                return false;
            }
            tempV.clear();
        }
        return true;
    }
};