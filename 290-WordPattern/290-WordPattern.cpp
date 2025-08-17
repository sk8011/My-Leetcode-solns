// Last updated: 17/8/2025, 11:32:10 pm
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int start=0;
        vector<string> sVec;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                sVec.push_back(s.substr(start,i-start));
                start=i+1;
            }else if(i==len-1){
                sVec.push_back(s.substr(start,len-start));
            }
        }
        unordered_set<string> vecSet;
        unordered_set<char> pattSet;
        for(string str:sVec){
            vecSet.insert(str);
        }
        for(char c:pattern){
            pattSet.insert(c);
        }
        cout<<pattSet.size()<<endl<<vecSet.size();
        if(sVec.size()!=pattern.length()){
            return false;
        }
        if(pattSet.size()!=vecSet.size()){
            return false;
        }
        map<char,string> mp;
        int i=0;
        for(string str:sVec){
            if(mp.count(pattern[i])>0){
                if(str!=mp[pattern[i]]){
                    return false;
                }
            }
            mp[pattern[i]]=str;
            i++;
        }
        return true;
    }
};