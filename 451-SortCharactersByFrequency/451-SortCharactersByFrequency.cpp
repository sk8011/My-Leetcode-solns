// Last updated: 17/8/2025, 11:31:58 pm
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        multimap<int,char> mm;
        for(pair p:mp){
            mm.insert({p.second,p.first});
            cout<<p.first<<endl;
        }
        string ans;
        pair<int,char> p;
        int a;
        char c;
        for(auto it=mm.rbegin();it!=mm.rend();it++){
            a=(*it).first;
            c=(*it).second;
            ans.append(a,c);
        }
        return ans;
    }
};