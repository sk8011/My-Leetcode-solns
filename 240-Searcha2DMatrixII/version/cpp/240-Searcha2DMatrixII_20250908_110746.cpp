// Last updated: 8/9/2025, 11:07:46 am
// crazy good solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        // start at top right corner (as elements to the down are increasing and to the left are increasing)
        int i=0,j=n-1;
        while(i<m && j>=0){
            if(target==matrix[i][j]) return true;
            else if(target>matrix[i][j]) i++;
            else j--;
        }
        return false;
    }
};