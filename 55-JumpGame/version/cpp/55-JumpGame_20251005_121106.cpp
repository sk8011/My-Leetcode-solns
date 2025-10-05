// Last updated: 5/10/2025, 12:11:06 pm
class Solution {
public:
// if the array doesn't contain 0 then we would either reach the end or exceed it.
// and we are given the max jump meaning that we could choose to jump 1 at each try and reach there.
    bool canJump(vector<int>& nums) {
        int len=nums.size();
        vector<int> zeros;
        if(len==1){
            return true;
        }
        if(nums[0]==0){
            return false;
        }

        for(int i=0;i<len-1;i++){
            if(nums[i]==0){
                if(!zeros.empty()){
                    if(zeros[zeros.size()-1]==i-1) zeros.pop_back();
                }
                zeros.push_back(i);
            }
        }

        if(zeros.size()==0){
            return true;
        }

        bool jump=false;
        for(int i:zeros){
            jump=false;
            for(int j=i-1;j>=0;j--){
                if(nums[j]>(i-j)){
                    jump=true;
                    break;
                }
            }
            if(jump==false){
                return false;
            }
        }
        return true;
    }
};