// Last updated: 17/8/2025, 11:31:57 pm
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int len=g.size();
        int j=0,i=0;
        if(s.size()==0){
        }else{
            while(i<len && j<s.size()){
                if(s[j]>=g[i]){
                    i++;
                }
                j++;
            }
        }
        
        return i;
    }
};