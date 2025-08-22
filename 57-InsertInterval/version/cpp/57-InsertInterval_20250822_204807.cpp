// Last updated: 22/8/2025, 8:48:07 pm
// better than the last solution in terms of code size and code complexity.
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        if(n==0){
            return {newInterval};
        }
        bool inserted=false;
        // if(newInterval[1]<intervals[0][0]){
        //     intervals.insert(intervals.begin(),newInterval);
        //     return intervals;
        // }
        // for(int i=0;i<n;i++){
        //     if(newInterval[0]>=intervals[i][0] && newInterval[0]<=intervals[i][1]){
        //         intervals[i][1]=max(intervals[i][1],newInterval[1]);
        //         inserted=true;
        //     }else if(i!=n-1 && (newInterval[0]>intervals[i][1] && newInterval[0]<intervals[i+1][0])){
        //         intervals.insert(intervals.begin()+i+1,newInterval);
        //         inserted=true;
        //     }else if(newInterval[1]>=intervals[i][0] && newInterval[1]<=intervals[i][1]){
        //         intervals[i][0]=min(intervals[i][0],newInterval[0]);
        //         cout<<intervals[0][0];
        //         inserted=true;
        //     }else if(newInterval[0]<=intervals[i][0] && newInterval[1]>=intervals[i][1]){
        //         intervals[i]=newInterval;
        //     }
        //     if(inserted){
        //         break;
        //     }
        // }
        // if(newInterval[0]>intervals[n-1][1]){
        //     intervals.push_back(newInterval);
        // }

        for(int i=0;i<n;i++){
            if(newInterval[0]<=intervals[i][0]){
                intervals.insert(intervals.begin()+i,newInterval);
                inserted=true;
                break;
            }
        }

        if(!inserted) intervals.push_back(newInterval);

        vector<vector<int>> ans;
        vector<int> temp=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=temp[1]){
                temp[1]=max(temp[1],intervals[i][1]);
            }else{
                ans.push_back(temp);
                temp=intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};