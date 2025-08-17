// Last updated: 17/8/2025, 11:32:27 pm
class Solution {
public:
    string tempFunc(int start,int curr){
        string temp;
        temp+=to_string(start);
        temp.push_back('-');
        temp.push_back('>');
        temp+=to_string(curr);
        return temp;
    }
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string temp;
        int len=nums.size();
        if(len==0){
            return ans;
        }else if(len==1){
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        int start=nums[0];
        int curr=start;
        for(int i=1;i<len;i++){
            if(nums[i]!=curr+1){
                if(start==curr){
                    temp+=to_string(start);
                }else{
                    temp=tempFunc(start,curr);
                }
                start=nums[i];
                curr=start;
                ans.push_back(temp);
                temp.clear();
                if(i==len-1){
                    ans.push_back(to_string(nums[i]));
                }
            }else{
                curr++;
                if(i==len-1){
                    if(start==curr){
                        temp+=to_string(start);
                    }else{
                        temp=tempFunc(start,curr);
                    }
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        return ans;
    }
};