// Last updated: 17/8/2025, 11:31:01 pm
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int k=n/3;
        if(n>k*3){
            k++;
        }
        int a=0;
        int ans=0;
        while(ans<=k){
            set<int>s;
            for(int i=a;i<n;i++){
                s.insert(nums[i]);
            }
            if(s.size()==n-a){
                break;
            }
            a+=3;
            if(a>n-1){
                return k;
            }
            ans++;
        }
        return ans;
    }
};