// Last updated: 17/8/2025, 11:30:58 pm
class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int j=0;
        int ans=0;
        while(j<n){
            for(int i=1;i<m;i++){
                if(grid[i-1][j]>=grid[i][j]){
                    ans+=(grid[i-1][j]-grid[i][j]+1);
                    grid[i][j]=grid[i-1][j]+1;
                }
            }
            j++;
        }
        return ans;
        
    }
};