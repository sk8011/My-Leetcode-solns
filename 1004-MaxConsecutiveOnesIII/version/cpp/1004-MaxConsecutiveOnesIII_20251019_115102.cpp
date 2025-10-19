// Last updated: 19/10/2025, 11:51:02 am
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zeros=0;
        int tGap=0,tOnes=0;
        int minGap=INT_MAX;
        int maxOnes=0;
        for(int i=0;i<n;i++){
            int e=nums[i];
            if(e==0){
                if(e==0) zeros++;
                tGap++;
                maxOnes=max(maxOnes,tOnes);
                if(i!=n-1) tOnes=0;
            }else if(e==1){
                minGap=min(tGap,minGap);
                tOnes++;
                if(i!=n-1) tGap=0;
            }
            if(i==n-1){
                maxOnes=max(maxOnes,tOnes);
                minGap=min(tGap,minGap);
            }
        }
        if(zeros<=k) return n;
        cout<<minGap;
        if(minGap>k) return maxOnes+k;
        int l=0,r=n-1;
        int wSize=n;
        int temp=zeros;
        while(wSize>0){
            while(r<n){
                if(temp<=k) return wSize;
                if(nums[l]==0) temp--;
                if(r+1<n && nums[r+1]==0) temp++;
                r++;
                l++;
            }
            wSize--;
            l=0;
            r=wSize-1;
            if(nums[wSize]==0) zeros--;
            temp=zeros;
        }
        return 0;
    }
};