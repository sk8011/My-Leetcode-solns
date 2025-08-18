// Last updated: 18/8/2025, 10:44:20 am
// This solution uses a monotonic stack to store previous indices.
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n*2;i++){
            while(!st.empty() && nums[i%n]>nums[st.top()]){
                ans[st.top()]=nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return ans;
    }
};