// Last updated: 12/1/2026, 11:26:33 am
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
24        auto distinct = [&]() {
25            int c = 0;
26            for (int i = 0; i < 26; i++)
27                if (freq[i]) c++;
28            return c;
29        };
30
31        while(r<n){
32            if(distinct()<=maxLetters){
33                string tmp=s.substr(l,r-l+1);
34                ans=max(ans,++mp[tmp]);
35            }
36            freq[s[l]-'a']--;
37            l++;
38            r++;
39            if(r<n) freq[s[r]-'a']++;
40        }
41        return ans;
42    }
43};