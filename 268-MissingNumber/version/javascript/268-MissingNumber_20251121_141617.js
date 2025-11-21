// Last updated: 21/11/2025, 2:16:17 pm
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let len=nums.length;
    let xor=0;
    for(let i=0;i<len+1;i++){
        xor^=i;
    }
    for(let x of nums){
        xor^=x;
    }
    return xor;
};