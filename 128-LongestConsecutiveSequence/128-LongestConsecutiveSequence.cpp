// Last updated: 17/8/2025, 11:32:56 pm
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans=0;
        int cnt=1;
        int n=nums.size();
        for(int e:nums){
            st.insert(e);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                cnt=1;
                while(st.find(it+1)!=st.end()){
                    it+=1;
                    cnt+=1;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};