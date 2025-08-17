// Last updated: 17/8/2025, 11:34:05 pm
class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        bool neg=false;
        bool sign=false;
        bool enc=false;
        string res;
        for(char c:s){
            if(!enc && !sign && c==' ') continue;
            else if(c=='-' && (!enc && !sign)) {neg=true; sign=true;}
            else if(c=='+' && (!enc && !sign)) sign=true;
            else if(c>='0' && c<='9') {
                enc=true;
                if(res.empty() && c=='0') continue;
                res+=c; 
            }
            else break;
        }
        
        long int ans=0;
        if(res.size()>10){
            if(neg) {ans=pow(2,31); ans=0-ans;}
            else ans=pow(2,31)-1;
            return ans;
        }

        long long int mul=1;
        for(int i=res.size()-1;i>=0;i--){
            ans+=(res[i]-'0')*mul;
            mul*=10;
            if(ans>pow(2,31)-1 && !neg){
                ans=pow(2,31)-1;
                break;
            }else if(ans>pow(2,31) && neg){
                ans=pow(2,31);
                break;
            }
        }
        if(neg){
            ans=0-ans;
        }
        return ans;
    }
};