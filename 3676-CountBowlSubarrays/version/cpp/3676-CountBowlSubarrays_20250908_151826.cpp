// Last updated: 8/9/2025, 3:18:26 pm
class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> right(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[i%n]>nums[st.top()]){
                right[st.top()]=i%n;
                st.pop();
            }
            st.push(i%n);
        }

        vector<int> left(n,-1);
        stack<int>().swap(st);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(!st.empty()) left[i]=st.top();
            st.push(i);
        }


        int cnt=0;
        for(int i=0;i<n;i++){
            if(left[i]!=-1 && right[i]!=-1){
                if(right[i]-left[i]>=2) cnt++;
            }
        }
        return cnt;
    }
};