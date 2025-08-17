// Last updated: 17/8/2025, 11:32:03 pm
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ransom,mag;
        for(char c:ransomNote){
            ransom[c]++;
        }
        for(char c:magazine){
            mag[c]++;
        }
        for(auto pr:ransom){
            if(mag[pr.first]>=pr.second){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};