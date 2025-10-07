// Last updated: 7/10/2025, 8:03:54 am
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int e:nums) pq.push(e);
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};