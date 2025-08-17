// Last updated: 17/8/2025, 11:34:02 pm
class Solution {
public:
// either the size of array is bigger or the min element in array.
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxAr = 0;
        int left = 0, right = n - 1;

        while (left < right) {
            int h = min(height[left], height[right]);
            maxAr = max(maxAr, (right - left) * h);

            // Move the shorter one inward
            if (height[left] <= height[right])
                left++;
            else
                right--;
        }

        return maxAr;
    }

};