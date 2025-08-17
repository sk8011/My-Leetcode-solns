// Last updated: 17/8/2025, 11:30:57 pm
class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        char temp=1;
        char c=s[0];
        if(s.size()==1 && k==1){
            return true;
        }
        for(int i=1;i<s.size();i++){
            if(c==s[i]){
                temp++;
            }else{
                if(temp==k){
                    return true;
                }
                c=s[i];
                temp=1;
            }
        }
        if(temp==k){
            return true;
        }
        return false;
    }
};