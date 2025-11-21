// Last updated: 21/11/2025, 4:40:09 pm
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const mp=new Map();
    const n=nums.length;
    for(let i=0;i<n;i++){
        const diff=target-nums[i];
        if(mp.has(diff)) return [mp.get(diff),i];
        mp.set(nums[i],i);
    }
    return [];
};