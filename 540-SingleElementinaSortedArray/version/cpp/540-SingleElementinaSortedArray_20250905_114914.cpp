// Last updated: 5/9/2025, 11:49:14 am
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int high = n - 1;
        int low = 0;
        
        while (low < high) {   // \U0001f539 use < instead of >
            int mid = (low + high) / 2;
            
            if (mid < n - 1 && nums[mid] == nums[mid + 1]) {
                // pair starts at mid
                if ((mid - low) % 2 == 0) {  // \U0001f539 fixed parity check
                    low = mid + 2;
                } else {
                    high = mid - 1;
                }
            } 
            else if (mid > 0 && nums[mid] == nums[mid - 1]) {
                // pair ends at mid
                if ((mid - low) % 2 == 0) {  // \U0001f539 fixed parity check
                    high = mid - 2;
                } else {
                    low = mid + 1;
                }
            } 
            else {
                return nums[mid];
            }
        }
        
        return nums[low];  // \U0001f539 return nums[low], not nums[high]
    }
};
