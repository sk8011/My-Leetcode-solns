// Last updated: 17/8/2025, 11:33:32 pm
class Solution {
public:
    double myPow(double x, long int n) {
        if (n == 0) return 1;          // Base case: x^0 = 1
        if (n < 0) return 1 / myPow(x, -n); // Handle negative powers
        
        double half = myPow(x, n / 2); // Recursive step: divide n by 2
        if (n % 2 == 0) {
            return half * half;        // If n is even
        } else {
            return x * half * half;    // If n is odd
        }
    }
};