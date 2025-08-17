// Last updated: 17/8/2025, 11:33:52 pm
class Solution {
public:

    bool isValid(string s) {
        int close=0;
        vector<char> stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stack.push_back(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                close++;
                if(stack.size()!=0){
                    if(s[i]==')' && stack[stack.size()-1]=='('){
                        stack.pop_back();
                        close--;
                    }
                    else if(s[i]==']' && stack[stack.size()-1]=='['){
                        stack.pop_back();
                        close--;
                    }
                    else if(s[i]=='}' && stack[stack.size()-1]=='{'){
                        stack.pop_back();
                        close--;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(stack.size()!=0){
            return false;
        }
        else if(stack.size()==0 && close==0){
            return true;
        }
        return false;
    }
};