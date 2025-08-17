// Last updated: 17/8/2025, 11:32:47 pm
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int next=1;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int> breaks;
        int cnt=0;
        int c;
        vector<pair<int,int>> spec;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(cnt==1){
                    breaks.push_back(c);
                }
                if(cnt>2 && cnt%2!=0){
                    pair<int,int> p;
                    if(breaks.empty()){
                        p.first=0;
                    }else{
                        p.first=breaks[breaks.size()-1]+1;
                    }
                    p.second=i;
                    spec.push_back(p);
                }
                breaks.push_back(i);
                cnt=0;
            }else if(nums[i]<0){
                cnt++;
                c=i;
            }
            if(i==n-1 && cnt>=1){
                if(cnt==1) breaks.push_back(c);
                if(cnt>2 && cnt%2!=0){
                    if(breaks.empty()){
                        spec.push_back({0,n});
                    }else{
                        spec.push_back({breaks[breaks.size()-1]+1,n});
                    }
                }
            }
        }

        int curr=0;
        int temp=1,prod=nums[0];
        bool flag=false;
        for(int i=0;i<n;i++){
            if(curr<breaks.size() && i==breaks[curr]){
                if(flag){
                    prod=max(prod,temp);
                }
                temp=1;
                flag=false;
                curr++;
                continue;
            }
            temp*=nums[i];
            flag=true;
            if(breaks.empty() || curr>=breaks.size()) prod=max(temp,prod);
        }
        // prod=max(temp,prod);
        for(pair p:spec){
            for(int i=p.first;i<p.second;i++){
                temp=1;
                for(int j=i;j<p.second;j++){
                    temp*=nums[j];
                    prod=max(temp,prod);
                }
            }
        }
        int maxxy=*max_element(nums.begin(),nums.end());
        return max(prod,maxxy);
    }
};