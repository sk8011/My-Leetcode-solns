// Last updated: 17/8/2025, 11:31:14 pm
class Solution {
public:
    string removeDigit(string number, char digit) {
        int count=0;
        vector<int> indices;
        int rem=-1;
        int n=number.size()-1;
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                if(number[i]<number[i+1]){
                    rem=i;
                    break;
                }else{
                    indices.push_back(i);
                }  
            }
        }
        if(number[n]==digit){
            indices.push_back(n);
        }
        if(rem==-1){
            rem=*indices.rbegin();
        }
        string temp;
        for(int i=0;i<n+1;i++){
            if(i!=rem){
                temp.push_back(number[i]);
            }
        }
        return temp;
    }
};