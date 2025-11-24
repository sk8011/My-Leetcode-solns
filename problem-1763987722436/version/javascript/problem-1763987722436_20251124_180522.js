// Last updated: 24/11/2025, 6:05:22 pm
/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    const m=matrix.length;
    const n=matrix[0].length;
    let l=0;
    let r=m*n-1;
    let mid=Math.floor(l+(r-l)/2);
    while(r>=l){
        const val=matrix[Math.floor(mid/n)][mid%n];
        if(val==target){
            return true;
        }
        else if(val>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        mid=Math.floor(l+(r-l)/2)
    }
    return false;
};