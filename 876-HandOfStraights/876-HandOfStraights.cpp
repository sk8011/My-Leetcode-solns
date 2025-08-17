// Last updated: 17/8/2025, 11:31:39 pm
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0){
            return false;
        }
        sort(hand.begin(),hand.end());
        // for(int e:hand){
        //     cout<<e<<" ";
        // }
        // cout<<endl;
        int temp=hand[0];
        int k=groupSize-1;
        for(int i=1;i<n;i++){
            if(hand[i]==-1){
                continue;
            }
            if(k==0){
                // for(int e:hand){
                //     cout<<e<<" ";
                // }
                // cout<<endl;
                i=1;
                while(hand[i]==-1){
                    ++i;
                }
                temp=hand[i];
                hand[i]=-1;
                k=groupSize-1;
                continue;
            }
            if(hand[i]==temp+1){
                k--;
                temp=hand[i];
                hand[i]=-1;
            }else if(hand[i]==temp){
                continue;
            }else{
                
                return false;
            }
        }
        for(int i=1;i<n;i++){
            if(hand[i]!=-1){
                return false;
            }
        }
        return true;
    }
};