// Last updated: 17/8/2025, 11:31:26 pm
class Solution {
public:
    int maxDepth(string str) {
        int s=0;
        int cnt=0;
        stack<char> st;
        for(char c:str){
            if(c=='('){
               st.push(c);
               s++; 
            } 
            else if(c==')'){
                cnt=max(cnt,s);
                s--;
                st.pop();
            }
        }
        return cnt;
    }
};