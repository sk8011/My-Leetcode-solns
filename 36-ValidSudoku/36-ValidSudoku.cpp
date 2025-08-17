// Last updated: 17/8/2025, 11:33:43 pm
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking for rows
        int row=0;
        while(row<9){
            int arr[10]={0};
            for(int i=0;i<9;i++){
                int a=board[row][i]-48;
                if(a>0 && a<10){
                    arr[a]++;
                    if(arr[a]>1){
                        return false;
                    }
                }
            }
            row++;
        }
        // checking for columns
        int col=0;
        while(col<9){
            int arr[10]={0};
            for(int i=0;i<9;i++){
                int a=board[i][col]-48;
                if(a>0 && a<10){
                    arr[a]++;
                    if(arr[a]>1){
                        return false;
                    }
                }
            }
            col++;
        }
        // checking for boxes
        int box=1;
        col=0;
        row=0;
        while(box<10){
            int arr[10]={0};
            for(int i=row;i<row+3;i++){
                for(int j=col;j<col+3;j++){
                    int a=board[i][j]-48;
                    if(a>0 && a<10){
                        arr[a]++;
                        if(arr[a]>1){
                            return false;
                        }
                    }
                }
            }
            if(box%3==0){
                row+=3;
                col=0;
            }else{
                col+=3;
            }
            box++;
        }
        return true;
    }
};