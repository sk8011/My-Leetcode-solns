// Last updated: 5/11/2025, 6:03:07 pm
class Solution {
public:
    void recur(int ind,int n,vector<int> nums,vector<int> &vec,vector<vector<int>> &ans,int target,int sum,int k){
        if(vec.size()==k || ind>=n){
            if(vec.size()==k && sum==target){
                ans.push_back(vec);
            }
            return;
        }
        vec.push_back(nums[ind]);
        recur(ind+1,n,nums,vec,ans,target,sum+nums[ind],k);
        vec.pop_back();
        recur(ind+1,n,nums,vec,ans,target,sum,k);
    }
    vector<vector<int>> mid(vector<int>& candidates, int target, int k){
        vector<int> vec;
        vector<vector<int>> ans;
        int n=candidates.size();
        recur(0,n,candidates,vec,ans,target,0,k);
        return ans;
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int> candidates;
        for(int i=0;i<9;i++){
            candidates.push_back(i+1);
        }
        return mid(candidates,target,k);
    }
};