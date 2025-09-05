// Last updated: 5/9/2025, 5:37:05 pm
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0;      // starting index of longest palindrome
        int maxLen = 1;     // length of longest palindrome

        for (int i = 0; i < n; i++) {
            // -------- Odd length palindromes --------
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }

            // -------- Even length palindromes --------
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
