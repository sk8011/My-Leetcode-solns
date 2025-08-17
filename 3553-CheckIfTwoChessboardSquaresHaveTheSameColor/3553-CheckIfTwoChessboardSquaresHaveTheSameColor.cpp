// Last updated: 17/8/2025, 11:31:05 pm
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a1=coordinate1[0]-96;
        int a2=coordinate1[1]-48;
        int b1=coordinate2[0]-96;
        int b2=coordinate2[1]-48;
        if((a1+a2)%2==(b1+b2)%2){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};