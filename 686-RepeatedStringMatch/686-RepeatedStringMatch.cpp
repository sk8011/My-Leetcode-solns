// Last updated: 17/8/2025, 11:31:45 pm
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int len1=a.size();
        int len2=b.size();
        set<char> s1,s2;
        for(char i:a){
            s1.insert(i);
        }
        for(char i:b){
            s2.insert(i);
        }
        if(s2.size()>s1.size()){
            return -1;
        }
        int ans=1;
        string temp=a;
        for(int i=0;i<(len2/len1)+2;i++){
            if(temp.size()>=len2){
                for(int j=0;j<=temp.size()-len2;j++){
                    if(temp.substr(j,len2)==b){
                        return ans;
                    }
                }
            }
            temp+=a;
            ans++;
        }
        return -1;
    }
};