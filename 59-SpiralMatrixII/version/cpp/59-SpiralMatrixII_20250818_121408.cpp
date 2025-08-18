// Last updated: 18/8/2025, 12:14:08 pm
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        vector<int> ans;
        for(int i=1;i<pow(n,2)+1;i++){
            ans.push_back(i);
        }
        int left=0,right=n-1,top=0,bottom=n-1;
        int c=0;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                matrix[top][i]=ans[c];
                c++;
            }
            top++;

            for(int i=top;i<=bottom;i++){
                matrix[i][right]=ans[c];
                c++;
            }
            right--;
            
            if(bottom>=top){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=ans[c];
                    c++;
                }
                bottom--;
            }
            
            if(right>=left){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=ans[c];
                    c++;
                }
                left++;
            }
        }
        return matrix;
    }
};