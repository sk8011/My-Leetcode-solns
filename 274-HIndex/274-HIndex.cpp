// Last updated: 17/8/2025, 11:32:16 pm
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int papers=citations.size();
        int hIndex=0;
        int point0=0;
        sort(citations.begin(),citations.end());
        for(int i=0;i<papers;i++){
            if(citations[i]==0){
                point0++;
            }
            if(citations[i]<=papers-i){
                hIndex=max(hIndex,citations[i]);
            }else if(citations[i]>papers-i){
                hIndex=max(hIndex,papers-i);
            }
        }
        if(point0==papers){
            return 0;
        }
        if(citations[point0]>=papers-point0){
            hIndex=papers-point0;
        }
        return hIndex;
    }
};