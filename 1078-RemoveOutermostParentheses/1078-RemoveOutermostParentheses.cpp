// Last updated: 17/8/2025, 11:31:30 pm
class Solution {
public:
    string removeOuterParentheses(string s) {
        int i=0;
        string ans;
        int n=s.size();
        vector<int> vec;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                vec.push_back(i);
            }
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                st.pop();
                if(st.empty()){
                    vec.push_back(i);
                }
            }
        }
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<vec.size() && vec[j]==i){
                j++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};