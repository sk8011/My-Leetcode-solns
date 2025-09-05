// Last updated: 5/9/2025, 5:29:08 pm
class Solution {
public:
    string longestPalindrome(string s) {
        string t;
        int n=s.size(),num=1;
        string ans=s.substr(0,1);
        int wSize=n;
        int left=0;
        int right=left+wSize-1;
        while(wSize>1){
            while(right<n){
                int l=left,r=right;
                bool ok=true;
                while(r>=l){
                    if(s[r]==s[l]){
                        r--;l++;
                    }else{
                        ok=false;
                        break;
                    }
                }
                if(ok) return s.substr(left,wSize);
                left++;right++;
            }
            wSize--;
            left=0;
            right=left+wSize-1;
        }
        return ans;
    }
};