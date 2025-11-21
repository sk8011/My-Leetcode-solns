// Last updated: 21/11/2025, 1:55:42 pm
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0) return false;
    let n=x;
    let arr=[];
    while(n){
        arr.push(n%10);
        n=Math.floor(n/10);
    }
    let len=arr.length;
    for(let i=0;i<Math.floor(len/2);i++){
        if(arr[i]!=arr[len-i-1]){
            return false;
        }
    }
    return true;
};