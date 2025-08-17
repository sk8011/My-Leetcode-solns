// Last updated: 17/8/2025, 11:31:29 pm
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0){
            return false;
        }
        sort(nums.begin(),nums.end());
        // for(int e:nums){
        //     cout<<e<<" ";
        // }
        // cout<<endl;
        int temp=nums[0];
        int x=k-1;
        for(int i=1;i<n;i++){
            if(nums[i]==-1){
                continue;
            }
            if(x==0){
                // for(int e:nums){
                //     cout<<e<<" ";
                // }
                // cout<<endl;
                i=1;
                while(nums[i]==-1){
                    ++i;
                }
                temp=nums[i];
                nums[i]=-1;
                x=k-1;
                continue;
            }
            if(nums[i]==temp+1){
                x--;
                temp=nums[i];
                nums[i]=-1;
            }else if(nums[i]==temp){
                continue;
            }else{
                
                return false;
            }
        }
        for(int i=1;i<n;i++){
            if(nums[i]!=-1){
                return false;
            }
        }
        return true;
    }
};