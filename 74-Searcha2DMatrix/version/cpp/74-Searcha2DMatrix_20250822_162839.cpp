// Last updated: 22/8/2025, 4:28:39 pm
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m*n-1;
        int mid=left+(right-left)/2;
        while(right>=left){
            int col=mid%n;
            int row=mid/n;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
            mid=left+(right-left)/2;
        }

        return false;
    }
};