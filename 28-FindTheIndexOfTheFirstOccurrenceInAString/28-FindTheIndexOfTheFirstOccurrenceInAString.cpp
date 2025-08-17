// Last updated: 17/8/2025, 11:33:46 pm
class Solution {
public:
    string subStr(string s,int start,int len){
        string sub;
        for(int i=start;i<start+len;i++){
            sub.push_back(s[i]);
        }
        return sub;
    }

    int strStr(string haystack, string needle) {
        bool exist=false;
        int a=haystack.size();
        int b=needle.size();
        if(b>a){
            return -1;
        }
        for(int i=0;i<=a-b;i++){
            if(subStr(haystack,i,b)==needle){
                return i;
            }
        }
        return -1;
    }
};