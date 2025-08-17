// Last updated: 17/8/2025, 11:32:48 pm
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> vec;
        string ans;
        int l=0;
        char c;
        for(int r=0;r<n;r++){
            c=s[r];
            if(c==' '){
                if(r>l){
                    vec.push_back(s.substr(l,r-l));
                }
                l=r+1;
            }
            if(r==n-1 && s[r]!=' '){
                vec.push_back(s.substr(l,r-l+1));
            }
        }
        for(auto it=vec.rbegin();it!=vec.rend();++it){
            ans+=*it;
            if(it!=vec.rend()-1) ans+=" ";
        }
        return ans;
    }
};