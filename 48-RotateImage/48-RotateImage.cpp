// Last updated: 17/8/2025, 11:33:33 pm
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // int c=0;
        // while(c<n/2){
        //     for(int i=0;i<n;i++){
        //         swap(matrix[i][c],matrix[i][n-1-c]);
        //     }
        //     c++;
        // }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};