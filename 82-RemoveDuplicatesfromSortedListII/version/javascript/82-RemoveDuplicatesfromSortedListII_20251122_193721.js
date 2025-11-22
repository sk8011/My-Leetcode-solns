// Last updated: 22/11/2025, 7:37:21 pm
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
    let arr=[];
    while(curr){
        if(curr.val!=temp.val){
            temp.next=curr;
            temp=temp.next;
        }else{
            if(arr.length==0 || arr[arr.length-1]!=curr.val) arr.push(curr.val);
        }
        curr=curr.next;
    }
    temp.next=null;
    temp=head;
    let prev=null;
    let i=0;
    while(i<arr.length && temp){
        if(temp.val==arr[i]){
            if(temp==head){
                head=head.next;
            }else{
                prev.next=temp.next;
                temp=prev.next;
            }
            i++;
        }else{
            if(!prev) prev=temp;
            else prev=prev.next;
            temp=temp.next;
        }
    }
    return head;
};