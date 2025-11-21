// Last updated: 21/11/2025, 2:02:08 pm
/**
 * @param {number} n
 * @return {number}
 */
function fibo(n){
    if(n==0 || n==1) return n;
    return fibo(n-1)+fibo(n-2);
}

var fib = function(n) {
    return fibo(n);
};