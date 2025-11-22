// Last updated: 22/11/2025, 2:35:54 pm
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    let prev=null;
    let curr=head;
    while(curr){
        let temp=curr.next;
        curr.next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
};