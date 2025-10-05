// Last updated: 5/10/2025, 12:47:21 pm
class Solution {
public:
    int jump(vector<int>& nums) {
        int cnt=0;
        int index=0;
        int n=nums.size();
        if(n==1) return 0;
        while(index<n){
            if(index+nums[index]>=n-1) return cnt+1;
            int fir=INT_MIN;
            int sec;
            for(int i=index+1;i<=index+nums[index];i++){
                fir=max(fir,nums[i]+i);
                if(fir==nums[i]+i) sec=i;
            }
            index=sec;
            cnt++;
        }
        return cnt;
    }
};