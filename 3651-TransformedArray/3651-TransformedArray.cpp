// Last updated: 17/8/2025, 11:31:02 pm
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int i=0;
        vector<int> result;
        int s=nums.size();
        int temp;
        // if(s==1){
        //     result.push_back(nums[0]);
        //     return result;
        // }
        while(i<s){
            temp=i;
            temp+=nums[i];
            if(temp>s-1){
                temp%=s;
            }else if(temp<0){
                temp-=i;
                temp=abs(temp);
                temp-=i;
                temp=abs(temp)%s;
                if(temp==0){}else{
                    temp=s-temp;
                }
            }
            result.push_back(nums[temp]);
            i++;
        }
        return result;
    }
};