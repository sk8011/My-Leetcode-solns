// Last updated: 17/8/2025, 11:31:10 pm
class Solution {
public:
    bool subst(string s){
        set <char> ss;
        for(int j=0;j<s.size();j++){
            ss.insert(s[j]);
        }
        for(auto it=ss.begin();it!=ss.end();it++){
            if(count(s.begin(),s.end(),*it)>2){
                return false;
            }
        }
        return true;
    }

    int maximumLengthSubstring(string s) {
        int i=s.size(),j=0;
        while(i){
            if(subst(s.substr(j,i))){
                return i;
            }
            if(i+j>=s.size()){
                i--;
                j=0;
            }
            else{
                j++;
            }
        }
        return 0;
    }
};