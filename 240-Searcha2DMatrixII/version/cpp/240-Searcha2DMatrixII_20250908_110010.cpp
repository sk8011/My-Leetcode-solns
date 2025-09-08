// Last updated: 8/9/2025, 11:00:10 am
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0;
        int m=matrix.size();
        int n=matrix[0].size();
        while(i<m && j<n){
            if(target>=matrix[i][j] && target<=matrix[m-1][j]){
                vector<int> temp;
                for(int x=i;x<m;x++){
                    temp.push_back(matrix[x][j]);
                }
                if(binary_search(temp.begin(),temp.end(),target)) return true;
            }
            if(target>=matrix[i][j] && target<=matrix[i][n-1]){
                if(binary_search(matrix[i].begin()+j,matrix[i].end(),target)) return true;
            }
            i++;
            j++;
        }
        return false;
    }
};