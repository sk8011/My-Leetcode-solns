// Last updated: 17/8/2025, 11:30:55 pm
class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<pair<int,int>> vec;
        pair<int,int> p;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                p.first=i;
                p.second=grid[i][j];
                vec.push_back(p);
            }
        }
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
        long long int sum=0;
        for(int i=vec.size()-1;i>=0;i--){
            p=vec[i];
            if(k==0){
                break;
            }
            if(limits[p.first]>0){
                limits[p.first]--;
                sum+=p.second;
                k--;
            }
        }
        return sum;
    }
};