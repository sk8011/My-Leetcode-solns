// Last updated: 17/8/2025, 11:30:29 pm
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int xa=x,xb=x+k-1;
        while(xb>xa){
            for(int i=0;i<k;i++){
                swap(grid[xa][y+i],grid[xb][y+i]);
            }
            xa++;
            xb--;
        }
        return grid;
    }
};