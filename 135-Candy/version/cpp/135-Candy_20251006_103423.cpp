// Last updated: 6/10/2025, 10:34:23 am
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> candies(n,1);
        if(n==1) return 1;
        for (int i = 1; i < n; ++i) {
            // If current rating is higher than previous, give more candies
            if (ratings[i] > ratings[i - 1])
                candies[i] = candies[i - 1] + 1;
        }

        // Traverse from right to left
        for (int i = n - 2; i >= 0; --i) {
            // If current rating is higher than next, adjust candy count
            if (ratings[i] > ratings[i + 1])
                candies[i] = max(candies[i], candies[i + 1] + 1);
        }
        int sum=0;
        for(int e:candies) sum+=e;
        return sum;
    }
};