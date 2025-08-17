// Last updated: 17/8/2025, 11:33:20 pm
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        int end=len-1;
        for(int i=len-1;i>=0;i--){
            if(digits[i]==9){
                end--;
            }else{
                break;
            }
        }
        if(end==-1){
            digits[0]=1;
            digits.push_back(0);
            for(int i=1;i<digits.size();i++){
                digits[i]=0;
            }
        }else{
            digits[end]++;
            for(int i=end+1;i<len;i++){
                digits[i]=0;
            }
        }
        return digits;
    }
};