// Last updated: 6/9/2025, 5:51:29 pm
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1;
        while(k){
            if(!binary_search(arr.begin(),arr.end(),i)) k--;
            i++;
        }
        return i-1;
    }
};