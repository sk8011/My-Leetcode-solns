// Last updated: 21/11/2025, 4:56:24 pm
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    let newArr=nums.map((el,i)=>el*el);
    newArr.sort((a,b)=>a-b);
    return newArr;
};