// Last updated: 17/8/2025, 11:31:19 pm
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int temp;
        int i;
        for(i=n-1;i>=0;i--){
            temp=num[i]-'0';
            if(temp%2!=0){
                break;
            }
        }
        return num.substr(0,i+1);
    }
};