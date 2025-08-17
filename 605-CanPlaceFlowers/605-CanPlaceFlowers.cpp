// Last updated: 17/8/2025, 11:31:49 pm
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev=0,next=2,s=flowerbed.size();
        if(s==1 && ((flowerbed[0]==0 && n==1)||n==0)){
            return true;
        }
        else if(s==1 && (flowerbed[0]!=0 || n>1)){
            return false;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=2;
        }
        if(flowerbed[s-1]==0 && flowerbed[s-2]==0){
            flowerbed[s-1]=2;
        }
        while(next<s){
            int temp=(prev+next)/2;
            if(flowerbed[temp]==0 && (flowerbed[prev]==0 && flowerbed[next]==0)){
                cout<<"tru"<<endl;
                flowerbed[temp]=2;
                prev++;
                next++;
            }
            else{
                prev++;
                next++;
            }
        }
        int ans=0;
        for(int i=0;i<s;i++){
            if(flowerbed[i]==2){
                ans++;
            }
        }
        cout<<ans;
        return (ans>=n);
    }
};