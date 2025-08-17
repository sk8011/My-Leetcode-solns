// Last updated: 17/8/2025, 11:31:00 pm
class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();
        if(numFriends==1){
            return word;
        }
        char m='a';
        set<string> ans;
        int maxSize=n-(numFriends-1);
        for(char c:word){
            if(c>=m){
                m=c;
            }
        }
        for(int i=0;i<n;i++){
            if(word[i]==m){
                int temp=min(n-i,maxSize);
                ans.insert(word.substr(i,temp));
            }
        }
        string s=*ans.rbegin();
        return s;
    }
};