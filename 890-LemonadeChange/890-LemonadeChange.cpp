// Last updated: 17/8/2025, 11:31:38 pm
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> money;
        money[5]=0;
        money[10]=0;
        money[20]=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                money[5]++;
            }else if(bills[i]==10 && money[5]>0){
                money[5]--;
                money[10]++;
            }else if(bills[i]==20 && (money[5]>0 && money[10]>0)){
                money[20]++;
                money[5]--;
                money[10]--;
            }else if(bills[i]==20 && money[5]>2){
                money[5]-=3;
                money[20]++;
            }else{
                return false;
            }
        }
        return true;
    }
};