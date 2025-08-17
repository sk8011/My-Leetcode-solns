// Last updated: 17/8/2025, 11:31:20 pm
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();
        string ans;
        int s=(s1>=s2)?s2:s1;
        for(int i=0;i<s;i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        if(s1>s2){
            for(int i=s;i<s1;i++){
                ans.push_back(word1[i]);
            }
        }
        else if(s2>s1){
            for(int i=s;i<s2;i++){
                ans.push_back(word2[i]);
            }
        }
        return ans;
    }
};