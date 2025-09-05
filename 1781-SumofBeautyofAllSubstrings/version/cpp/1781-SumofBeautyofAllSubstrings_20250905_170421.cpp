// Last updated: 5/9/2025, 5:04:21 pm
class Solution {
public:
    int beautySum(string s) {
        // for(char c:s){
        //     freq[c]++;
        // }
        int sum=0;
        int wSize=3;
        int n=s.size();
        while(wSize<n+1){
            vector<int> freq(27,0);
            for(int i=0;i<wSize;i++){
                freq[s[i]-'a']++;
            }

            int start=0;
            int end=start+wSize-1;
            while(end<n){
                int maxf=*max_element(freq.begin(),freq.end());
                int minf=maxf;
                for(int e:freq){
                    if(e!=0) minf=min(minf,e);
                }
                sum+=maxf-minf;
                freq[s[start]-'a']--;
                start++;
                end++;
                if(end!=n)freq[s[end]-'a']++;
            }
            // freq.clear();
            wSize++;
        }
        return sum;
    }
};