// Last updated: 17/8/2025, 11:30:41 pm
class Solution {
public:
    vector<string> partitionString(string s) {
        map<string,int> mp;
        vector<string> ans;
        string t;
        int curr=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            t=s.substr(curr,i-curr);
            if(mp.find(t)!=mp.end()) continue;
            else{
                ans.push_back(t);
                mp[t]++;
                curr=i;
            }
        }
        t=s.substr(curr,n-curr);
        if(mp.find(t)==mp.end()){
            ans.push_back(t);
        }
        return ans;
    }
};