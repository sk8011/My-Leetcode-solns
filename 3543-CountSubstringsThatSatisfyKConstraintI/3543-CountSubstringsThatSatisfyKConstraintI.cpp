// Last updated: 17/8/2025, 11:31:07 pm
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int Size=s.size();
        int ans=(Size*(Size+1))/2;
        int s0=count(s.begin(),s.end(),'0');
        int s1=count(s.begin(),s.end(),'1');
        if(Size<=2*k || s0<=k || s1<=k){
        }
        else{
            for(int i=Size;i>k*2;i--){
                int start=0;
                for(int j=i;j<=Size;j++){
                    string s1=s.substr(start,i);
                    int s10=count(s1.begin(),s1.end(),'0');
                    int s11=count(s1.begin(),s1.end(),'1');
                    start++;
                    if(s10>k && s11>k){
                        ans--;
                    }
                }
            }
        }
        return ans;
    }
};