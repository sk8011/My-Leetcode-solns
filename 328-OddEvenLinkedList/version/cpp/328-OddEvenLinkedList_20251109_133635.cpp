// Last updated: 9/11/2025, 1:36:35 pm
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* odd=new ListNode(head->val);
        ListNode* even=new ListNode(head->next->val);
        ListNode* oddH=odd;
        ListNode* evenH=even;
        ListNode* temp=head->next->next;
        int ind=2;
        while(temp!=NULL){
            if(ind%2==0){
                odd->next=temp;
                odd=odd->next;
            }else{
                even->next=temp;
                even=even->next;
            }
            ind++;
            temp=temp->next;
        }
        even->next=NULL;
        odd->next=NULL;

        temp=head;
        odd=oddH;
        even=evenH;
        odd=odd->next;
        while(odd!=NULL){
            // cout<<odd->val<<" ";
            temp->next=odd;
            odd=odd->next;
            temp=temp->next;
        }
        while(even!=NULL){
            temp->next=even;
            even=even->next;
            temp=temp->next;
        }
        return head;
    }
};