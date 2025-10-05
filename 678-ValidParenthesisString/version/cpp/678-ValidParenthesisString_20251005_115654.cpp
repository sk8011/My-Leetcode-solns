// Last updated: 5/10/2025, 11:56:54 am
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0; // possible range of open parentheses count

        for (char c : s) {
            if (c == '(') {
                low++; high++;
            } else if (c == ')') {
                low--; high--;
            } else { // '*'
                low--; high++; // '*' can be '(' or ')' or ''
            }

            if (high < 0) return false; // too many ')'
            if (low < 0) low = 0;       // '*' used as '(' to fix negatives
        }

        return low == 0;
    }
};
