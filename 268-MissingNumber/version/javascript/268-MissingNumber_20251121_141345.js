// Last updated: 21/11/2025, 2:13:45 pm
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let len=nums.length;
    let arr=new Array(len+1).fill(false);
    for(let i=0;i<len;i++){
        arr[nums[i]]=true;
    }
    return arr.indexOf(false);
};