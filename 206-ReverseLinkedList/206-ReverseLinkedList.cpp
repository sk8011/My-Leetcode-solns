// Last updated: 17/8/2025, 11:32:34 pm
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        
        while(temp!=NULL){
            temp=temp->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        // head=temp;
        return prev;
    }
};