// Last updated: 21/8/2025, 12:42:03 pm
class Solution {
public:
    int binSearch(vector<int> arr,int& left,int& mid,int& right,int target){
        if(left>right) return -1;
        if(target==arr[mid]) return mid;
        else if(target>arr[mid]){
            left=mid+1;
            mid=(left+right)/2;
        }else{
            right=mid-1;
            mid=(left+right)/2;
        }
        return binSearch(arr,left,mid,right,target);
    }
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=(left+right)/2;
        return binSearch(nums,left,mid,right,target);
    }
};