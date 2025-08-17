// Last updated: 17/8/2025, 11:34:00 pm
class Solution {
public:
    int romanToInt(string s) {
        string symbols={'I','V','X','L','C','D','M'};
        int values[]={1,5,10,50,100,500,1000};
        unordered_map<char,int> mp;
        for(int i=0;i<7;i++){
            mp[symbols[i]]=values[i];
        }
        int sum=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(i!=n-1){
                if(mp[s[i]]<mp[s[i+1]]){
                    sum-=mp[s[i]];
                }else{
                    sum+=mp[s[i]];
                }
            }
            else sum+=mp[s[i]];
        }
        return sum;
    }
};