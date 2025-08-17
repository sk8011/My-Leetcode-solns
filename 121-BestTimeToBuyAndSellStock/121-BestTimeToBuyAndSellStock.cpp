// Last updated: 17/8/2025, 11:32:59 pm
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            maxprof=max(maxprof,prices[i]-min_price);
        }

        return maxprof;
    }
};