// Last updated: 3/10/2025, 8:19:55 pm
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        vector<int> vis(m,0);
        int start=0;
        int cnt=1;
        bool check=true;
        while(check){
            vis[start]=1;
            stack<int> st;
            st.push(start);
            while(!st.empty()){
                int row=st.top();
                st.pop();
                for(int i=0;i<m;i++){
                    if(i!=row && isConnected[row][i]){
                        if(vis[i]==0) st.push(i);
                        vis[i]=1;
                    }
                }
                
            }
            
            check=false;
            for(int i=0;i<m;i++){
                if(vis[i]==0){
                    start=i;
                    check=true;
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};