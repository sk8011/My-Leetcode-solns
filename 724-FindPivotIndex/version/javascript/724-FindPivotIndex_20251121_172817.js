// Last updated: 21/11/2025, 5:28:17 pm
/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    let n=nums.length;
    for(let i=0;i<n;i++){
        let ar1=0,ar2=0;
        ar1=nums.slice(0,i).reduce((ac,el)=>ac+el,0);
        ar2=nums.slice(i+1,n).reduce((ac,el)=>ac+el,0);
        if(ar1==ar2) return i;
    }
    return -1;
};