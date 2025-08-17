// Last updated: 17/8/2025, 11:30:52 pm
class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n=pizzas.size();
        int days=n/4;
        sort(pizzas.begin(),pizzas.end());
        int end=n-1;
        long long int sum=0;
        int odds,evens;
        evens=days/2;
        if(days%2==0){
            odds=days/2;
        }else{
            odds=days/2+1;
        }
        while(odds--){
            sum+=pizzas[end];
            end--;
        }

        while(evens--){
            sum+=pizzas[end-1];
            end-=2;
        }
        return sum;
    }
};
            // if(temp==days-1){
            //     if(temp%2!=0){
            //         if(mp[largest]>=2){
            //             sum+=largest;
            //             mp[largest]-=2;
            //         }else{
            //             sum+=second;
            //             mp[second]--;
            //             mp[largest]--;
            //         }
            //     }else{
            //         sum+=largest;
            //         mp[largest]--;
            //     }
            // }else{
            //     if(temp%2!=0){
            //         if(mp[largest]>=2){
            //             sum+=largest;
            //             mp[largest]-=2;
            //         }else if(mp[second]==1){
            //             int i;
            //             for(i=0;i<pizzas.size();i++){
            //                 if(pizzas[i]==second){
            //                     break;
            //                 }
            //             }
            //             sum+=pizzas[i-1];
            //             mp[pizzas[i-1]]--;
            //             mp[second]--;
            //             pizzas.erase(pizzas.begin()+i-1);
            //         }else{
            //             sum+=second;
            //             mp[second]-=2;
            //         }
            //     }else{
            //         sum+=largest;
            //         mp[largest]--;
            //     }
            // }
            // temp++;