// Last updated: 23/7/2026, 11:59:36 am
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        //a number is a power of 2 if it has exactly one bit set in it's binary representation
5        return (n>0)&&((n&(n-1))==0);
6    }
7};