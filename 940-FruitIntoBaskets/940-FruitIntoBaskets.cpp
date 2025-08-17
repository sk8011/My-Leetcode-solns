// Last updated: 17/8/2025, 11:31:35 pm
class Solution {
public:

    // use shrink n expand concept of sliding window

    int totalFruit(vector<int>& fruits) {
        int l=0,r=0;
        int n=fruits.size();
        map<int,int> mp;
        int ans=0;
        int temp=0;
        while(r<n && l<=r){
            mp[fruits[r]]++;
            r++;
            if(mp.size()<=2){
                ans=max(ans,r-l);
            }else{
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
        }
        ans=max(ans,r-l);
        return ans;
    }
};