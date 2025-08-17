// Last updated: 17/8/2025, 11:31:27 pm
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxxy=*max_element(candies.begin(),candies.end());
        vector <bool> ans;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxxy){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};