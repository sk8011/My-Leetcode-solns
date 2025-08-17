// Last updated: 17/8/2025, 11:33:23 pm
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        cout<<n;
        int k=0;
        if(n>1){
        for(int i=n-1;;i--){
            if(s[i]==' '){
                s.erase(i);
            }
            else{
                break;
            }
        }
        n=s.size();
        cout<<n;
        reverse(s.begin(), s.end());
        for(char i:s){
            if(i==' '){
                break;
            }
            k++;
        }
        return k;}
        else if(n==1)
           return 1;
        else
           return 0;
    }
};