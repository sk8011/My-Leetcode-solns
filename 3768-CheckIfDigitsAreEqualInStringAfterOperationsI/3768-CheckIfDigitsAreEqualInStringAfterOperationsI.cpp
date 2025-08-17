// Last updated: 17/8/2025, 11:30:54 pm
class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()!=2){
            int a;
            string temp;
            for(int i=0;i<s.size()-1;i++){
                a=(s[i]-48);
                a+=(s[i+1]-48);
                temp+=(a%10+'0');
            }
            s=temp;
        }
        if(s[0]==s[1]){
            return true;
        }
        return false;
    }
};