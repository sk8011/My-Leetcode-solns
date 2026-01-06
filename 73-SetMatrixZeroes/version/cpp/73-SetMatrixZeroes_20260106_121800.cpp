// Last updated: 6/1/2026, 12:18:00 pm
1class Solution {
2public:
3
4    // For O(1) soln, use the matrix itself as marker (but keep care of a few things)
5
6    void setZeroes(vector<vector<int>>& matrix) {
7        int m=matrix.size();
8        int n=matrix[0].size();
9        bool firstColZero=false, firstRowZero=false;
10        for(int i=0;i<m;i++){
11            if(matrix[i][0]==0){
12                firstColZero=true;
13                break;
14            }
15        }
16        for(int i=0;i<n;i++){
17            if(matrix[0][i]==0){
18                firstRowZero=true;
19                break;
20            }
21        }
22
23        for(int i=1;i<m;i++){
24            for(int j=1;j<n;j++){
25                if(matrix[i][j]==0){
26                    matrix[0][j]=0;
27                    matrix[i][0]=0;
28                }
29            }
30        }
31        for(int i=1;i<m;i++){
32            if(matrix[i][0]==0){
33                for(int j=0;j<n;j++){
34                    matrix[i][j]=0;
35                }
36            }
37        }
38        for(int i=1;i<n;i++){
39            if(matrix[0][i]==0){
40                for(int j=0;j<m;j++){
41                    matrix[j][i]=0;
42                }
43            }
44        }
45
46        if(firstRowZero){
47            for(int i=0;i<n;i++){
48                matrix[0][i]=0;
49            }
50        }
51
52        if(firstColZero){
53            for(int i=0;i<m;i++){
54                matrix[i][0]=0;
55            }
56        }
57
58
59    }
60};