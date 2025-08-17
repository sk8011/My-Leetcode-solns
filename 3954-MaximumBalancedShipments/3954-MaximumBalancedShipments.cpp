// Last updated: 17/8/2025, 11:30:32 pm
class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int left=0;
        int right=1;
        int n=weight.size();
        int cnt=0;
        bool check=false;
        int m;
        while(right<n){
            if(!check) m=*max_element(weight.begin()+left,weight.begin()+right+1);
            else{
                if(weight[right]>m){
                    m=weight[right];
                }
            }
            if(m>weight[right]){
                cnt++;
                left=right+1;
                right=left+1;
                check=false;
            }else{
                right++;
                check=true;
            }
        }
        return cnt;
    }
};