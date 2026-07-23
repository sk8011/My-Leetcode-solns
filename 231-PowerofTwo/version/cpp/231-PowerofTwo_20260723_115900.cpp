// Last updated: 23/7/2026, 11:59:00 am
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        // //a number is a power of 2 if it has exactly one bit set in it's binary representation
5        // // any number with a single bit set to 1 would have every bit right to it set to 1 and that bit set to 0 in it's previous number.
6
7        // //4=100 while 3=011
8        // //16=10000 while 15=01111
9        // return (n>0)&&((n&(n-1))==0);
10
11        if(n<0) return false;
12        int i=0;
13        bool occ=false;
14        while(i<32){
15            if(n&(1<<i)){
16                if(occ) return false;
17                occ=true;
18            }
19            i++;
20        }
21        return occ;
22    }
23};