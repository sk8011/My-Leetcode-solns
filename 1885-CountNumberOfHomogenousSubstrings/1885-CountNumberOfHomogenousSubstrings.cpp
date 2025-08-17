// Last updated: 17/8/2025, 11:31:22 pm
class Solution {
public:
#define mod 1000000007
    int countHomogenous(string s) {
        int n=s.size();
        int l=0;
        long long int ans=0;
        int t;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                t=i-l;
                ans+=(((t*1LL*(t+1))/2)%mod);
                l=i;
            }
        }
        t=n-l;
        ans+=(((t*1LL*(t+1))/2)%mod);
        
        return ans;
    }
};