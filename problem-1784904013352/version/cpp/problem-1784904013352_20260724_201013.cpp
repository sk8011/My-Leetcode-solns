// Last updated: 24/7/2026, 8:10:13 pm
1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4        if(divisor==1) return dividend;
5        else if(dividend==INT_MIN && divisor==-1) return INT_MAX;
6
7        bool isPositive=true;
8        if(divisor<0 && dividend>=0) isPositive=false;
9        else if(divisor>0 && dividend<0) isPositive=false;
10
11        long long divid=dividend;
12        divid=abs(divid);
13
14        long long divis=divisor;
15        divis=abs(divis);
16
17        long long cnt=0;
18        for (int i = 31; i >= 0; i--) {
19            if ((divis << i) <= divid) {
20                divid -= (divis << i);
21                cnt += (1LL << i);
22            }
23        }
24
25        return isPositive?cnt:-1*cnt;
26    }
27};