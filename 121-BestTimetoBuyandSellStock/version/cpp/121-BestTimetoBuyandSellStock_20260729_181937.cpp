// Last updated: 29/7/2026, 6:19:37 pm
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        int mini=prices[0];
6        int sum=0;
7        for(int i=1;i<n;i++){
8            if(prices[i]>mini){
9                sum+=(prices[i]-mini);
10            }
11            mini=prices[i];
12        }
13        return sum;
14    }
15};