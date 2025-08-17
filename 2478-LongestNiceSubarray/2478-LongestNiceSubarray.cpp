// Last updated: 17/8/2025, 11:31:13 pm
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int start=0,next=0;
        int n=nums.size();
        int ans=1;
        while(start<n-1){
            int i;
            for(i=start+1;i<n;i++){
                if((nums[start]&nums[i])!=0){
                    break;
                }
            }
            cout<<nums[start]<<endl;
            bool len=false;
            while(!len){
                len=true;
                for(int j=start+1;j<i;j++){
                    for(int k=j+1;k<i;k++){
                        if((nums[j]&nums[k])!=0){
                            len=false;
                            break;
                        }
                    }
                }
                if(!len){
                    i--;
                }
            }
            if(len){
                ans=max(ans,i-start);
            }
            start++;
        }
        return ans;
    }
};