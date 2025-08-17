// Last updated: 17/8/2025, 11:30:42 pm
class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        vector<int> indicesM;
        vector<int> indicesP;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==-1){
                indicesM.push_back(i);
            }
            if(nums[i]==1){
                indicesP.push_back(i);
            }
        }
        int m=indicesM.size();
        int p=indicesP.size();
        if(m%2!=0 && p%2!=0){
            return false;
        }else{
            if(m%2==0 && p%2==0){
                int a=k,b=k;
                for(int i=0;i<p-1;i+=2){
                    a-=(indicesP[i+1]-indicesP[i]);
                }
                for(int i=0;i<m-1;i+=2){
                    b-=(indicesM[i+1]-indicesM[i]);
                }
                k=max(a,b);
            }
            else if(m%2==0){
                for(int i=0;i<m-1;i+=2){
                    k-=(indicesM[i+1]-indicesM[i]);
                }
            }
            else{
                for(int i=0;i<p-1;i+=2){
                    k-=(indicesP[i+1]-indicesP[i]);
                }
            }
        }

        if(k>=0){
            return true;
        }
        return false;
    }
};