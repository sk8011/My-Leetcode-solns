// Last updated: 17/8/2025, 11:33:54 pm
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> newNums;
        for(int i:nums){
            mp[i]++;
            if(mp[i]<5){
                newNums.push_back(i);
            }
        }
        nums=newNums;
        newNums.clear();
        vector<vector<int>> ans;
        vector<int> vec;
        int n=nums.size();
        long long int temp;
        if(n>3){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                        for(int l=k+1;l<n;l++){
                            temp=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                            if(temp==target){
                                vec={nums[i],nums[j],nums[k],nums[l]};
                                sort(vec.begin(),vec.end());
                                ans.push_back(vec);
                            }
                        }
                    }
                }
            }
        }

        set<vector<int>> sv;
        for(vector<int> v:ans){
            sv.insert(v);
        }
        ans.clear();
        for(vector<int> v:sv){
            ans.push_back(v);
        }

        return ans;
    }
};