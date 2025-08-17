// Last updated: 17/8/2025, 11:33:37 pm
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });
        int i=0;
        while(i<nums.size()){
            if(nums[i]>0){
                i++;
            }
            else{
                break;
            }
        }
        if(i==0){
            return 1;
        }
        nums.resize(i);
        int min=1; set<int> s;
        for(int j=0;j<i;j++){
            s.insert(nums[j]);
        }
        for(auto &j:s){
            cout<<j<<" ";
            if(j==min){
                ++min;
            }
            else{
                return min;
            }
        }
        return min;
    }
};