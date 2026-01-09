// Last updated: 9/1/2026, 1:53:25 pm
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n=nums.size();
5        int high=n-1;
6        int low=0;
7
8        while(high>=low){
9            int mid=low+(high-low)/2;
10            if(nums[mid]==target) return mid;
11            if(nums[mid]>=nums[low]){
12                if(target>=nums[low] && target<nums[mid]){
13                    high=mid-1;
14                }else{
15                    low=mid+1;
16                }
17            }else{
18                if(target<=nums[high] && target>nums[mid]){
19                    low=mid+1;
20                }else{
21                    high=mid-1;
22                }
23            }
24        }
25        return -1;
26    }
27};