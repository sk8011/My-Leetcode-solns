// Last updated: 17/8/2025, 11:30:38 pm
class Solution {
public:
    bool checkPrime(int n){
        int cnt=0;
        for (int i = 2; i * i <= n; i ++) {
            if (n % i == 0)
                cnt++;
        }
        if(cnt>0) return false;
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long int sum1=0,sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>1 && checkPrime(i)){
                sum2+=nums[i];
            }else{
                sum1+=nums[i];
            }
        }
        return abs(sum1-sum2);
    }
};