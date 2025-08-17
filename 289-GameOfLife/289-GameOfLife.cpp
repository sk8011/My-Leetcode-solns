// Last updated: 17/8/2025, 11:32:11 pm
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
        int left,right;
        vector<pair<int,int>> live,dead;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int neighbors=0;
                for(int x=0;x<8;x++){
                    left=i+dx[x];
                    right=j+dy[x];
                    if(left>=0 && right>=0 && left<m && right<n){
                        if(board[left][right]==1) neighbors++;
                    }
                }
                if(board[i][j]==1 && (neighbors<2 || neighbors>3)) dead.push_back({i,j});
                else if(board[i][j]==0 && neighbors==3) live.push_back({i,j});
            }
        }
        for(pair p:live){
            board[p.first][p.second]=1;
        }
        for(pair p:dead){
            board[p.first][p.second]=0;
        }
    }
};