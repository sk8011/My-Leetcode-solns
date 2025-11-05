// Last updated: 5/11/2025, 7:04:12 pm
class Solution {
public:
    void recur(int row, int n, const vector<string>& chars, string temp, vector<string>& ans) {
        if(row==n){
            ans.push_back(temp);
            return;
        }

        for(char e:chars[row]){
            temp.push_back(e);
            recur(row+1,n,chars,temp,ans);
            temp.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<string> chars(n,"");
        int ind=0;
        for(char e:digits){
            int u=(e=='7' || e=='9')?4:3;

            int offset=0;
            if(e>='8') offset=1;

            int d=e-'1'-1;
            for(int i=0;i<u;i++){
                chars[ind].push_back(char(d*3+'a'+offset+i));
            }
            ind++;
        }
        vector<string> ans;
        recur(0,n,chars,"",ans);
        return ans;
    }
};