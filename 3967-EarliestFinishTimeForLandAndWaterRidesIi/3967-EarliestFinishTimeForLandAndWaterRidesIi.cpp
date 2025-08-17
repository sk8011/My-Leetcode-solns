// Last updated: 17/8/2025, 11:30:30 pm
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
        int land=INT_MAX,water=INT_MAX;
        for(int i=0;i<n;i++){
            land=min(land,landStartTime[i]+landDuration[i]);
        }
        for(int j=0;j<m;j++){
            water=min(water,waterStartTime[j]+waterDuration[j]);
        }
        int ans1=0,ans2=0;
        ans1+=water;
        int ma=INT_MAX;
        for(int i=0;i<n;i++){
            if(landStartTime[i]<=water){
                ma=min(ma,landDuration[i]);
            }else{
                ma=min(ma,landStartTime[i]-water+landDuration[i]);
            }
        }
        ans1+=ma;
        ans2+=land;
        ma=INT_MAX;
        for(int j=0;j<m;j++){
            if(waterStartTime[j]<=land){
                ma=min(ma,waterDuration[j]);
            }else{
                ma=min(ma,waterStartTime[j]-land+waterDuration[j]);
            }
        }
        ans2+=ma;
        return min(ans1,ans2);
    }
};