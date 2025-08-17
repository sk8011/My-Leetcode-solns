// Last updated: 17/8/2025, 11:32:57 pm
class Solution {
public:
    bool isPalindrome(string s) {
        string s1,s2;
        for(char c:s){
            if((isalpha(c)&& (c>='a' && c<='z')) || isdigit(c)){
                s1.push_back(c);
            }
            else if(c>='A' && c<='Z'){
                s1.push_back(c+('a'-'A'));
            }
        }
        s2=s1;
        cout<<s2;
        reverse(s1.begin(),s1.end());
        return(s2==s1);
    }
};