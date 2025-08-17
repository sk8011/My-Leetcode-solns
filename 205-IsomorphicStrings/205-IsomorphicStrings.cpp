// Last updated: 17/8/2025, 11:32:35 pm
class Solution {
public:

    // all we have to do is check for one-to-one relationship

    bool isIsomorphic(string s, string t) {
        map<char,unordered_set<char>> mp1,mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]].insert(t[i]);
            mp2[t[i]].insert(s[i]);
            if(mp1[s[i]].size()>1 || mp2[t[i]].size()>1){
                return false;
            }
        }
        return true;
    }
};