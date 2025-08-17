// Last updated: 17/8/2025, 11:31:52 pm
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
		unordered_map<int,int> mp;
        int n=nums.size();
        int sum=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum-=1;
            }else{
                sum+=1;
            }
            if(mp.find(sum)!=mp.end()){
                maxlen=max(maxlen,i-mp[sum]);
            }else if(sum==0){
                maxlen=max(maxlen,i+1);
            }else{
                mp[sum]=i;
            }
        }
        return maxlen;
    }
};