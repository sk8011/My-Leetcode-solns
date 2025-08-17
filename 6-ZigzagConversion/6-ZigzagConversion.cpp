// Last updated: 17/8/2025, 11:34:08 pm
class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        int len=s.length();
        if(numRows==1){
            return s;
        }
        // int pointer=0;
        // int i=0;
        // while(i<numRows){
        //     while(pointer<len){
        //         ans.push_back(s[pointer]);
        //         pointer+=(2*(numRows-i-1)); //become 2->1
        //     }
        //     i++;
        //     pointer=i;
        // }

        vector<vector<char>> arr(numRows, vector<char>(len, '0'));
        arr[0][0]=s[0];
        int i=0,j=0;
        int pointer=0;
        while(pointer<len){
            if(i<numRows-1 && (j%(numRows-1)==0)){
                arr[i][j]=s[pointer];
                pointer++;
                i++;
            }else{
                arr[i][j]=s[pointer];
                pointer++;
                i--;
                j++;
            }
        }
        for(int x=0;x<numRows;x++){
            for(int y=0;y<len;y++){
                if(arr[x][y]!='0'){
                    ans.push_back(arr[x][y]);
                }
            }
        }

        return ans;
    }
};