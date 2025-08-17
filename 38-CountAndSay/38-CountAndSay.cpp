// Last updated: 17/8/2025, 11:33:42 pm
class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        char temp;
        string sec;
        n--;
        while(n--){
            temp=ans[0];
            int count=1;
            for(int i=1;i<ans.size();i++){
                if(ans[i]==temp){
                    count++;
                }
                if(i==ans.size()-1 || ans[i]!=temp){
                    sec+=(to_string(count)+temp);
                    count=1;
                    temp=ans[i];
                    if(i==ans.size()-1 && ans[i-1]!=temp){
                        sec+=(to_string(count)+temp);
                    }
                }
            }
            // cout<<sec<<endl;
            if(ans.size()==1){
                ans="11";
            }else{
                ans=sec;
                sec="";
            }
        }
        return ans;
    }
};