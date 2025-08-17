// Last updated: 17/8/2025, 11:31:48 pm
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=i+k-1;
        double sum=INT_MIN;
        long long int temp=0;
        for(int x=i;x<=j;x++){
            temp+=nums[x];
        }
        // sum=max(sum,(double)temp/k);
        while(j<n){
            sum=max(sum,(double)temp/k);
            temp-=nums[i];
            i++;
            j++;
            if(j!=n) temp+=nums[j];
        }
        return sum;
    }
};