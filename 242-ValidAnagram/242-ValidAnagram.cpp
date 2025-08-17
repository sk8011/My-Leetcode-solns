// Last updated: 17/8/2025, 11:32:19 pm
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> mpS;
        map<char,int> mpT;
        int n=s.size();
        for(int i=0;i<n;i++){
            mpS[s[i]]++;
            mpT[t[i]]++;
        }
        return mpS==mpT;
    }
};