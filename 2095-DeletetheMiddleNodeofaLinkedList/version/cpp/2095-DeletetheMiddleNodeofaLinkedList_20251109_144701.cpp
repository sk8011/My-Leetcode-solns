// Last updated: 9/11/2025, 2:47:01 pm
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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        ListNode* slow=NULL;
        ListNode* fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            if(slow==NULL) slow=head;
            else slow=slow->next;
        }
        if(slow->next!=NULL) slow->next=slow->next->next;
        else slow->next=NULL;
        return head;
    }
};