// Last updated: 17/8/2025, 11:33:57 pm
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]==0 || nums[n-1]==0){
            if(nums[0]==0 && nums[n-1]==0){
                return {{0,0,0}};
            }else if(nums[0]==0){
                if(nums[1]==0 && nums[2]==0){
                    return {{0,0,0}};
                }else{
                    return {};
                }
            }else if(nums[n-1]==0){
                if(nums[n-2]==0 && nums[n-3]==0){
                    return {{0,0,0}};
                }else{
                    return {};
                }
            }
        }

        if(nums[0]>0 || nums[n-1]<0) return {};

        int negatives;

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                negatives=i;
                break;
            }
        }

        int temp;
        set<vector<int>> ans;
        int left=0,currLeft=1,currRight=n-1;
        while(left<=negatives){
            while(currRight>currLeft){
                if(nums[currRight]+nums[currLeft]+nums[left]>0){
                    currRight--;
                }else if(nums[currRight]+nums[currLeft]+nums[left]<0){
                    currLeft++;
                }else{
                    ans.insert({nums[left],nums[currLeft],nums[currRight]});
                    currRight--;
                    currLeft++;
                }
            }
            left++;
            currLeft=left+1;
            currRight=n-1;
        }
        vector<vector<int>> rAns(ans.begin(),ans.end());
        return rAns;
    }
};