// Last updated: 18/8/2025, 12:36:24 pm
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
        int size=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            size++;
        }
        temp=head;
        int curr=0;
        while(temp){
            if(curr==0 && curr==size-n){
                head=head->next;
                break;
            }else if(curr==size-n-1){
                // free(temp->next);
                temp->next=temp->next->next;
                break;
            }
            curr++;
            temp=temp->next;
        }
        return head;
    }
};