// Last updated: 21/11/2025, 4:46:45 pm
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let ans=nums[0];
    let cnt=1;
    for(let i=1;i<nums.length;i++){
        if(nums[i]==ans) cnt++;
        else cnt--;
        if(cnt==0){
            ans=nums[i];
            cnt=1;
        }
    }
    return ans;
};