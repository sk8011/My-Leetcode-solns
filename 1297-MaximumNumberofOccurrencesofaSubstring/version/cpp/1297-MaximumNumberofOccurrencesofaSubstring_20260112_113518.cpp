// Last updated: 12/1/2026, 11:35:18 am
1class Solution {
2public:
3    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
4        const int BASE = 27;
5        const long long MOD = 1000000007;
6
7        int n = s.size();
8        int freq[26] = {0};
9        int distinct = 0;
10        unordered_map<long long, int> count;
11        long long hash = 0, power = 1;
12        int ans = 0;
13
14        for (int i = 0; i < minSize; i++) {
15            int c = s[i] - 'a';
16            if (++freq[c] == 1) distinct++;
17            hash = (hash * BASE + (c + 1)) % MOD;
18            if (i < minSize - 1) power = (power * BASE) % MOD;
19        }
20
21        if (distinct <= maxLetters)
22            ans = max(ans, ++count[hash]);
23
24        for (int i = minSize; i < n; i++) {
25            int left = s[i - minSize] - 'a';
26            int right = s[i] - 'a';
27
28            if (--freq[left] == 0) distinct--;
29            if (++freq[right] == 1) distinct++;
30
31            hash = (hash - power * (left + 1) % MOD + MOD) % MOD;
32            hash = (hash * BASE + (right + 1)) % MOD;
33
34            if (distinct <= maxLetters)
35                ans = max(ans, ++count[hash]);
36        }
37
38        return ans;
39    }
40};
41