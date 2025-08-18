// Last updated: 18/8/2025, 12:52:10 pm
// Did it in a single pass using a 2nd pointer that was "n" steps behind the 1st pointer, so that when the 1st pointer reached end, the 2nd pointer was at the position right before the node to be deleted.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res=new ListNode(0,head);
        ListNode* dummy=res;
        while(n){
            head=head->next;
            n--;
        }
        while(head){
            head=head->next;
            dummy=dummy->next;
        }
        dummy->next=dummy->next->next;
        ListNode* result=res->next;
        
        return result;
    }
};