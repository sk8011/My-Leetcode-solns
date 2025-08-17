// Last updated: 17/8/2025, 11:34:03 pm
#include <stdlib.h>
#include <stdio.h>
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x); 
        string g=s;
        reverse(s.begin(),s.end());
        if(g==s)
        return true;
        else 
        return false;
    }
};