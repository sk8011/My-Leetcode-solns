// Last updated: 17/8/2025, 11:33:40 pm
class Solution {
public:
    void recur(int ind,int n,vector<int> nums,vector<int> &vec,vector<vector<int>> &ans,int target,int sum){
        if(sum>=target || ind>=n){
            if(sum==target){
                ans.push_back(vec);
            }
            return;
        }
        vec.push_back(nums[ind]);
        sum+=nums[ind];
        recur(ind,n,nums,vec,ans,target,sum);
        vec.pop_back();
        sum-=nums[ind];
        recur(ind+1,n,nums,vec,ans,target,sum);
    }
    vector<vector<int>> mid(vector<int>& candidates, int target){
        vector<int> vec;
        vector<vector<int>> ans;
        int n=candidates.size();
        recur(0,n,candidates,vec,ans,target,0);
        return ans;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        return mid(candidates,target);
    }
};