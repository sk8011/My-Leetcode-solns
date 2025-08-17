// Last updated: 17/8/2025, 11:32:09 pm
class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        pre.resize(n+1);
        pre[0]=0;
        pre[1]=nums[0];
        for(int i=1;i<n;i++){
            pre[i+1]=nums[i]+pre[i];
        }
    }
    
    int sumRange(int left, int right) {
        return (pre[right+1]-pre[left]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */