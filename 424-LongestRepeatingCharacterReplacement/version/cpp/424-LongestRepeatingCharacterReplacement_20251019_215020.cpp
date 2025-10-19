// Last updated: 19/10/2025, 9:50:20 pm
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0;
        int n=s.size();
        int len=0;

        int maxi=0;
        int sum=0;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            maxi=max(maxi,mp[s[r]]);
            while((r-l+1)-maxi>k){
                mp[s[l]]--;
                l++;
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};