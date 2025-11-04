// Last updated: 4/11/2025, 8:34:10 pm
#define MOD 1000000007

class Solution {
public:
    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1)
                res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long eve=(n+1)/2;
        long long prim=n/2;
        return (power(5,eve)*power(4,prim))%MOD;
    }
};