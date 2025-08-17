// Last updated: 17/8/2025, 11:32:00 pm
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len=s.size();
        int pointer=0,i=0;
        while(pointer<len){
            if(t[i]==s[pointer]){
                pointer++;
                i++;
            }else{
                i++;
            }
            if(i>t.size()){
                return false;
            }
        }
        return true;
    }
};