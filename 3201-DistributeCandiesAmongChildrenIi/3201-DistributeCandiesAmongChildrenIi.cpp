// Last updated: 17/8/2025, 11:31:11 pm
class Solution {
public:
    // Function to compute nCr (binomial coefficient)
    long long binomial(int n, int r) {
        if (r < 0 || r > n) return 0;
        if (r == 0 || r == n) return 1;
        long long res = 1;
        for (int i = 1; i <= r; ++i) {
            res *= (n - i + 1);
            res /= i;
        }
        return res;
    }

    // Function to count number of valid distributions
    long long int countWays(int n, int k) {
        long long int total = 0;
        for (int i = 0; i <= 3; ++i) {
            long long int sign = (i % 2 == 0) ? 1 : -1;
            long long int remaining = n - i * (k + 1);
            long long term = binomial(3, i) * binomial(remaining + 2, 2);
            total += sign * term;
        }
        return total;
    }

    long long distributeCandies(int n, int limit) {
        return countWays(n,limit);
    }
};