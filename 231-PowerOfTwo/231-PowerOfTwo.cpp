// Last updated: 17/8/2025, 11:32:24 pm
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //a number is a power of 2 if it has exactly one bit set in it's binary representation
        // any number with a single bit set to 1 would have every bit right to it set to 1 and that bit set to 0 in it's previous number.

        //4=100 while 3=011
        //16=10000 while 15=01111
        return (n>0)&&((n&(n-1))==0);
    }
};