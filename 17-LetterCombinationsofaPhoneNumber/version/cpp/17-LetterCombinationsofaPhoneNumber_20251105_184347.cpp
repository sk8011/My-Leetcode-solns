// Last updated: 5/11/2025, 6:43:47 pm
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<vector<char>> chars(4,vector<char>(4));
        int ind=0;
        for(char e:digits){
            int u=(e=='7' || e=='9')?4:3;

            int offset=0;
            if(e>='8') offset=1;

            int d=e-'1'-1;
            for(int i=0;i<u;i++){
                chars[ind][i]=(char(d*3+'a'+offset+i));
            }
            ind++;
        }
        vector<string> ans;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                for(int k=0;k<4;k++){
                    for(int h=0;h<4;h++){
                        int cnt=0;
                        if(chars[0][i]!='\0')cnt++;
                        if(chars[1][j]!='\0')cnt++;
                        if(chars[2][k]!='\0')cnt++;
                        if(chars[3][h]!='\0')cnt++;
                        if(cnt==n){
                            string temp=string()+chars[0][i]+chars[1][j]+chars[2][k]+chars[3][h];
                            if(ans.empty()) ans.push_back(temp);
                            if(!ans.empty() && ans[ans.size()-1]!=temp) ans.push_back(temp);

                        }
                    }
                }
            }
        }
        return ans;
    }
};