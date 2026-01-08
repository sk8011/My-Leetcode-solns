// Last updated: 8/1/2026, 10:19:00 am
1class Solution {
2private:
3    int eval(char exp, int n1, int n2){
4        if(exp=='*'){
5            return n1*n2;
6        }
7        else if(exp=='+'){
8            return n1+n2;
9        }
10        else if(exp=='/'){
11            if(n1==0) return 0;
12            return n1/n2;
13        }else{
14            return n1-n2;
15        }
16    }
17    int stringToInt(string token){
18        int num=0;
19        int n=token.size()-1;
20        int mul=1;
21        while(n>=0){
22            if(n==0 && token[0]=='-'){
23                num=0-num;
24                n--;
25                continue;
26            }
27            num+=(token[n]-'0')*mul;
28            mul*=10;
29            n--;
30        }
31        return num;
32    }
33public:
34    int evalRPN(vector<string>& tokens) {
35        stack<int> st;
36        int ans=0;
37        for(string s:tokens){
38            if(s[0]=='-' && s.size()>1){
39                st.push(stringToInt(s));
40            }else if(s[0]>='0' && s[0]<='9'){
41                st.push(stringToInt(s));
42            }else{
43                int n2=st.top();
44                st.pop();
45                int n1=st.top();
46                st.pop();
47                char exp=s[0];
48                int n=eval(exp,n1,n2);
49                st.push(n);
50            }
51        }
52        return st.top();
53    }
54};