// Last updated: 21/11/2025, 6:05:50 pm
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    const newArr=nums.filter((el,i)=>el!=val);
    console.log(newArr);
    const n=newArr.length;
    nums.splice(0,n,...newArr);
    return newArr.length;
};