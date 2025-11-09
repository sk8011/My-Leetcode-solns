// Last updated: 9/11/2025, 2:37:56 pm
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
        
        return res->next;
    }
};