// Last updated: 17/8/2025, 11:30:51 pm
class Solution {
public:
    int longestPre(string s,string t){
        int i=0;
        while(i<s.size() && i<t.size()){
            if(s[i]==t[i]) i++;
            else break;
        }
        return i;
    }
    vector<int> longestCommonPrefix(vector<string>& words) {
        int n=words.size();
        if(n==1 || n==2){
            if(n==1) return {0};
            else return {0,0};
        }
        vector<int> ans;
        int c=0;
        int temp;
        vector<int> vec,arr;
        int m=0;
        for(int i=1;i<n;i++){
            vec.push_back(longestPre(words[i],words[i-1]));
            m=max(m,vec[i-1]);
        }
        while(c<n){
            if(c==0 || c==n-1){
                if(c==0){
                    if(vec[c]==m) temp=*max_element(vec.begin()+1,vec.end());
                    else temp=m;
                }
                else{
                    if(vec[c-1]==m) temp=*max_element(vec.begin(),vec.end()-1);
                    else temp=m;
                }
            }else{
                temp=longestPre(words[c+1],words[c-1]);
                if(vec[c]==m || vec[c-1]==m){
                    if(temp!=m){
                        for(int i=0;i<n-1;i++){
                            if(i==c || i==c-1) continue;
                            temp=max(vec[i],temp);
                        }
                    }
                }else{
                    temp=max(temp,m);
                }
            }
            ans.push_back(temp);
            // temp=0;
            c++;
        }
        return ans;
    }
};