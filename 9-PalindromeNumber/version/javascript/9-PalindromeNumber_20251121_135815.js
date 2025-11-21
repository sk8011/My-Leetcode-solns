// Last updated: 21/11/2025, 1:58:15 pm
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0) return false;
    let n=x;
    let cnum=0;
    while(n){
        cnum=cnum*10+n%10;
        n=Math.floor(n/10);
    }
    return cnum==x;
};