// Last updated: 3/10/2025, 9:31:01 pm
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        map<int,vector<int>> mp;
        int m=grid.size();
        int n=grid[0].size();

        int cnt1=0;
        
        queue<int> qq;
        vector<int> vis(n*m,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int k=i*n;
                if(grid[i][j]!=0){
                    if(i+1<m && grid[i+1][j]!=0){
                        mp[k+j].push_back((i+1)*n+j);
                        mp[(i+1)*n+j].push_back(k+j);
                    }
                    if(j+1<n && grid[i][j+1]!=0){
                        mp[k+j].push_back(k+j+1);
                        mp[k+j+1].push_back(k+j);
                    }
                }else{
                    vis[k+j]=1;
                }
                if(grid[i][j]==2){
                    qq.push(k+j);
                    vis[k+j]=1;
                }else if(grid[i][j]==1) cnt1++;
            }
        }

        if(cnt1==0) return 0;


        int mins=0;
        vector<int> temp;
        while(!qq.empty() || !temp.empty()){
            while(!qq.empty()){
                int a=qq.front();
                qq.pop();
                for(int i:mp[a]){
                    if(!vis[i]){
                        vis[i]=1;
                        temp.push_back(i);
                    }
                }
            }
            for(int i:temp){
                qq.push(i);
            }
            temp.clear();
            mins++;
        }
        for(int i:vis){
            if(i==0) return -1;
        }

        return mins-1;

    }
};