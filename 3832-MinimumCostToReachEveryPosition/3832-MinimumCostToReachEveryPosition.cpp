// Last updated: 17/8/2025, 11:30:47 pm
class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        for(int i=1;i<cost.size();i++){
            for(int j=0;j<i;j++){
                if(cost[j]<cost[i]){
                    cost[i]=cost[j];
                }
            }
        }
        return cost;
    }
};