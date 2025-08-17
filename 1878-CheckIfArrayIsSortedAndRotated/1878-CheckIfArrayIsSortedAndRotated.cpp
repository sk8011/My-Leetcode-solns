// Last updated: 17/8/2025, 11:31:23 pm
#include <bits/stdc++.h>
class Solution {
public:
    bool check(vector<int>& vec) {
        vector <int> sortedVec;
        for(int i=0;i<vec.size();i++){
            sortedVec.push_back(vec[i]);
        }
        sort(sortedVec.begin(),sortedVec.end());
        int i=0;
        while(i<vec.size()){
            vector <int> newVec;
            for(int j=i;j<vec.size();j++){
                newVec.push_back(vec[j]);
            }
            for(int j=0;j<i;j++){
                newVec.push_back(vec[j]);
            }
            i++;
            for(int z:newVec){
                cout<<z<<' ';
            }
            cout<<endl;
            if(newVec==sortedVec){
                return true;
            }
        }
        return false;
    }
};