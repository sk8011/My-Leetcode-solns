// Last updated: 17/8/2025, 11:33:14 pm
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ms;
        vector<int> ns;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    ms.push_back(i);
                    ns.push_back(j);
                }
            }
        }
        for(int i:ms){
            for(int j=0;j<n;j++){
                matrix[i][j]=0;
            }
        }
        for(int i:ns){
            for(int j=0;j<m;j++){
                matrix[j][i]=0;
            }
        }
    }
};