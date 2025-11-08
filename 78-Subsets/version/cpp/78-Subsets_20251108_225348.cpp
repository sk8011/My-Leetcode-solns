// Last updated: 8/11/2025, 10:53:48 pm
class Solution {
public:
    void recur(int ind, vector<int> nums, vector<int> temp, set<vector<int>>& ans){
        if(ind==-1){
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[ind]);
        recur(ind-1,nums,temp,ans);
        temp.pop_back();
        
        recur(ind-1,nums,temp,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        vector<vector<int>> ans;
        for(int i=0;i<subsets;i++){
            vector<int> temp;
            for(int ind=0;ind<n;ind++){
                if(i&(1<<ind)){
                    temp.push_back(nums[ind]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};