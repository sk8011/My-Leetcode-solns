// Last updated: 18/8/2025, 1:02:09 pm
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
          if(target>=matrix[i][0] && target<=matrix[i][n-1]){
            return binary_search(matrix[i].begin(),matrix[i].end(),target);
          }
        }
        return false;
    }
};