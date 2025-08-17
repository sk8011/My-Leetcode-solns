// Last updated: 17/8/2025, 11:33:21 pm
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* t=head;
        int size=0;
        while(t!=NULL){
            size++;
            t=t->next;
        }
        k%=size;
        while(k){
            ListNode* curr=head;
            ListNode* temp=curr->next;
            while(temp->next!=NULL){
                curr=curr->next;
                temp=temp->next;
            }
            curr->next=NULL;
            temp->next=head;
            head=temp;
            k--;
        }
        return head;
    }
};