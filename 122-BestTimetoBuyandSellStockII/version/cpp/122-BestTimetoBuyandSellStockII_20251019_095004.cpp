// Last updated: 19/10/2025, 9:50:04 am
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int sum=0;
        for(int i=1;i<n;i++){
            if(prices[i]>mini){
                sum+=prices[i]-mini;
                mini=prices[i];
            }else{
                mini=min(mini,prices[i]);
            }
        }
        return sum;
    }
};