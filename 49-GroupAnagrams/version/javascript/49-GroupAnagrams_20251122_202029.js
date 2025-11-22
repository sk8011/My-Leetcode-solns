// Last updated: 22/11/2025, 8:20:29 pm
/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let anagrams={};
    for(let str of strs){
        let t=str.split("").sort().join("");
        if(!anagrams.hasOwnProperty(t)){
            anagrams[t]=[];
        }
        anagrams[t]=[...anagrams[t],str];
    }
    return Object.values(anagrams);
};