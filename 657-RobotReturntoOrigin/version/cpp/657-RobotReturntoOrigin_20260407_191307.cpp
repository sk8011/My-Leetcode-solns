// Last updated: 7/4/2026, 7:13:07 pm
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int ver=0,hor=0;
5        for(char c:moves){
6            if(c=='U') ver+=1;
7            else if(c=='D') ver-=1;
8            else if(c=='R') hor+=1;
9            else hor-=1;
10        }
11        if(ver==0 && hor==0) return true;
12        return false;
13    }
14};