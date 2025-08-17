// Last updated: 17/8/2025, 11:34:11 pm
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0 || n==1) return n;
        unordered_map<char,int> mp;
        int i=0,j=1;
        mp[s[i]]++;
        mp[s[j]]++;
        int ans=1;
        while(j<n){
            if(mp.size()==j-i+1){
                ans=max(ans,j-i+1);
            }
            else{
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
            mp[s[j]]++;
        }
        return ans;
    }
};