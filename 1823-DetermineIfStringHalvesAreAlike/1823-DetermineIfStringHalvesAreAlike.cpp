// Last updated: 17/8/2025, 11:31:24 pm
class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=s.size()/2; int i=0,j=0;
        for(int c=0;c<l;c++){
            switch(tolower(s[c])){
                case 'a':
                i++;
                break;
                case 'e':
                i++;
                break;
                case 'i':
                i++;
                break;
                case 'o':
                i++;
                break;
                case 'u':
                i++;
                break;
                default:
                break;
            }
        }
        for(int c=l;c<s.size();c++){
            switch(tolower(s[c])){
                case 'a':
                j++;
                break;
                case 'e':
                j++;
                break;
                case 'i':
                j++;
                break;
                case 'o':
                j++;
                break;
                case 'u':
                j++;
                break;
                default:
                break;
            }
        }
        return i==j;
    }
};