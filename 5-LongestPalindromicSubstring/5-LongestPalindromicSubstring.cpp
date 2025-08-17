// Last updated: 17/8/2025, 11:34:09 pm
class Solution {
public:
    string longestPalindrome(string s) {
        string t;
        int n=s.size(),num=1;
        string ans;
        if(n==1) return s;
        int l,r=n-1;
        int l1,r1;
        for(l=0;l<n-num;l++){
            while(l<=r){
                if(s[l]==s[r]){
                    l1=l+1; r1=r-1;
                    bool flag=true;
                    while(l1<=r1){
                        if(s[l1]!=s[r1]){
                            flag=false;
                            break;
                        }
                        l1++; r1--;
                    }
                    if(flag){
                        t=s.substr(l,r-l+1);
                        if(t.size()>=num){
                            ans=t;
                            num=t.size();
                        }
                    }
                    // r=r1;
                }
                r--;
                
                // if(r1>l) r=r1;
                // else break;
            }
            r=n-1;
        }
        return ans;
    }
};