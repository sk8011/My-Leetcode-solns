// Last updated: 12/1/2026, 11:29:16 am
1class Solution {
2    // int findFreq(string s, string sub, int start){
3    //     int subn=sub.size();
4    //     int n=s.size();
5    //     int cnt=1;
6    //     for(int i=start;i<n-subn+1;i++){
7    //         if(s.compare(i, subn, sub) == 0){
8    //             cnt++;
9    //         }
10    //     }
11    //     return cnt;
12    // }
13public:
14    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
15        int ans=0;
16        int n=s.size();
17        int l=0,r=minSize-1;
18        unordered_map<string,int> mp;
19        int freq[26]={0};
20        for(int i=l;i<=r;i++){
21            freq[s[i]-'a']++;
22        }
23
24        int cnt = 0;
25        for (int i = 0; i < 26; i++) if (freq[i]) cnt++;
26            
27        while(r<n){
28            if(cnt<=maxLetters){
29                string tmp=s.substr(l,r-l+1);
30                ans=max(ans,++mp[tmp]);
31            }
32            freq[s[l]-'a']--;
33            if(freq[s[l]-'a']==0) cnt--;
34            l++;
35            r++;
36            if(r<n){
37                freq[s[r]-'a']++;
38                if(freq[s[r]-'a']==1) cnt++;
39            }
40        }
41        return ans;
42    }
43};