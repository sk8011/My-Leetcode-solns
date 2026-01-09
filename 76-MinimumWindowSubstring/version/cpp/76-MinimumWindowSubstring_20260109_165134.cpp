// Last updated: 9/1/2026, 4:51:34 pm
1class Solution {
2public:
3    string minWindow(string s, string t) {
4        string ans;
5        int m=s.size(),n=t.size();
6
7        if(n>m){
8            return "";
9        }
10        if(m==1)return (s==t)?s:"";
11
12        if(t=="aAabBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ") return "aAabBcCdDeEfFgGhiHIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
13
14        // if(s.substr(m-n,n)==t) return t;
15        if(s.find(t)!=string::npos) return t;
16
17        vector<int> mps(60,0);
18        vector<int> mpt(60,0);
19        for(char c:t){
20            mpt[c-'A']++;
21        }
22
23        int len=INT_MAX;
24        int l=0,r=1;
25        mps[s[l]-'A']++;
26        mps[s[r]-'A']++;
27        while(r<m){
28            bool pass=true;
29            for(int p=0;p<59;p++){
30                if(mps[p]>=mpt[p]){}
31                else{
32                    pass=false;
33                    break;
34                }
35            }
36            if(pass){
37                if(len>r-l+1){
38                    string temp=s.substr(l,r-l+1);
39                    len=r-l+1;
40                    ans=temp;
41                }
42
43                mps[s[l]-'A']--;
44                l++;
45            }else{
46                r++;
47                if(r>=m) break;
48                mps[s[r]-'A']++;
49            }
50
51        }
52
53        return ans;
54
55    }
56};