// Last updated: 10/1/2026, 8:06:32 pm
1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4        map<int,vector<int>> adj;
5        int m=grid.size();
6        int n=grid[0].size();
7        vector<pair<int,int>> vec={{-1,0},{0,-1},{1,0},{0,1}};
8        vector<int> vis(m*n,0);
9        vector<int> rotten(m*n,0);
10
11        for(int i=0;i<m;i++){
12            for(int j=0;j<n;j++){
13                if(grid[i][j]!=0){
14                    for(auto p:vec){
15                        int i1=i+p.first;
16                        int j1=j+p.second;
17                        if((i1>-1 && i1<m) && (j1>-1 && j1<n)){
18                            if(grid[i1][j1]==0) continue;
19                            else adj[i*n+j].push_back(i1*n+j1);
20                        }
21                    }
22                }
23                if(grid[i][j]!=1){
24                    vis[i*n+j]=1;
25                    if(grid[i][j]==2) rotten[i*n+j]=1;
26                }
27            }
28        }
29        // lo ji bn gyi adjacency list
30
31        int cnt=0;
32        while(true){
33            int check=true;
34            for(int e:vis){
35                if(e==0){
36                    check=false;
37                    break;
38                }
39            }
40            if(check) break;
41
42            bool worked=false;
43            vector<int> temp=rotten;
44            for(int i=0;i<n*m;i++){
45                if(temp[i]==1){
46                    for(int node:adj[i]){
47                        if(vis[node]==0){
48                            worked=true;
49                            vis[node]=1;
50                            rotten[node]=1;
51                        }
52                    }
53                }
54            }
55            if(!worked) return -1;
56            cnt++;
57        }
58        
59        return cnt;
60    }
61};