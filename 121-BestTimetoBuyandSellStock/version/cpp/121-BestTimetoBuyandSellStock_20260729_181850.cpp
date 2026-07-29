// Last updated: 29/7/2026, 6:18:50 pm
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        int mini=prices[0];
6        int sum=0;
7        for(int i=1;i<n;i++){
8            if(prices[i]>mini){
9                sum+=(prices[i]-mini);
10                mini=prices[i];
11            }else{
12                mini=prices[i];
13            }
14        }
15        return sum;
16    }
17};