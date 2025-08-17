// Last updated: 17/8/2025, 11:31:33 pm
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }else{
                if(!st.empty()){
                    if(st.top()=='(')
                        st.pop();
                    else ans++;
                }else{
                    ans++;
                }
            }
        }
        while(!st.empty()){
            ans++;
            st.pop();
        }
        return ans;
    }
};