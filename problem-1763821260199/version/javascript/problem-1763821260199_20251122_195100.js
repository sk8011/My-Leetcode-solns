// Last updated: 22/11/2025, 7:51:00 pm
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    if(!head || !head.next) return null;
    let curr=head;
    while(n--){
        curr=curr.next;
    }
    if(!curr) return head.next;
    let temp=head;
    let prev=null;
    while(curr){
        curr=curr.next;
        if(!prev) prev=temp;
        else prev=prev.next;
        temp=temp.next;
    }
    prev.next=temp.next;
    return head;
};