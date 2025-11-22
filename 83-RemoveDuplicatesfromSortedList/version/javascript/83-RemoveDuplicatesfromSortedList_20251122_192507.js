// Last updated: 22/11/2025, 7:25:07 pm
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
var deleteDuplicates = function(head) {
    if(!head) return head;
    let temp=head;
    let curr=temp.next;
    while(curr){
        if(curr.val!=temp.val){
            temp.next=curr;
            temp=temp.next;
        }
        curr=curr.next;
    }
    temp.next=null;
    return head;
};