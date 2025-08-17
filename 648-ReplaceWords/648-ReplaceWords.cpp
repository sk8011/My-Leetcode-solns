// Last updated: 17/8/2025, 11:31:46 pm
class Solution {
public:
string replaceWords(vector<string>& dictionary, string s) {
    sort(dictionary.begin(), dictionary.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });
    int i1=0,i2=0;

    vector<string> vec;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            i2=i;
            vec.push_back(s.substr(i1,i2-i1));
            i1=(i+1);
        }
    }
    if (i1 < s.size()) {
        vec.push_back(s.substr(i1));
    }
    string sss;
    for(auto &ss:vec){
        for(auto &dd:dictionary){
            if(ss.size()>=dd.size()){
               if(dd==ss.substr(0,dd.size())){
                   ss=dd;
                   break;
               }
            }
        }
        sss+=ss;
        sss+=' ';
    }
    sss.erase(sss.size()-1,1);
    return sss;
    }
};