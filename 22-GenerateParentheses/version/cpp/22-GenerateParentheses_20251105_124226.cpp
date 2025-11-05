// Last updated: 5/11/2025, 12:42:26 pm
class Solution {
public:
    bool checkValid(string arr){
        int n=arr.size();
        int close=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==')'){
                close++;
            }else{
                close--;
            }
            if(close<0) return false;
        }
        return true;
    }

    void recur(string temp, int open, int close, vector<string>& ans){
        if(open==0 && close==0){
            ans.push_back(temp);
            return;
        }
        if(open>0){
            recur(temp+'(',open-1,close,ans);
        }
        if(close>open){
            recur(temp+')',open,close-1,ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        string temp;
        int close=n,open=n;
        vector<string> ans;
        recur(temp,n,n,ans);
        return ans;
    }
};