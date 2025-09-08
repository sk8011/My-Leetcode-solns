// Last updated: 8/9/2025, 11:30:14 am
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bool check=true;
                if(i+1<m){
                    if(mat[i][j]<=mat[i+1][j]) check=false;
                }
                if(i-1>=0){
                    if(mat[i][j]<=mat[i-1][j]) check=false;
                }
                if(j+1<n){
                    if(mat[i][j]<=mat[i][j+1]) check=false;
                }
                if(j-1>=0){
                    if(mat[i][j]<=mat[i][j-1]) check=false;
                }
                if(check) return {i,j};
            }
        }
        return {-1,-1};
    }
};