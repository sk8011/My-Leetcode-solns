// Last updated: 10/11/2025, 7:20:44 pm
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
    pair<ListNode*,ListNode*> reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* pre=temp;
        ListNode* prev=NULL;
        while(temp){
            ListNode* t=temp->next;
            temp->next=prev;
            prev=temp;
            temp=t;
        }
        head=prev;
        return {pre,head};
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1) return head;
        int tem=k-1;
        ListNode* temp=head;
        ListNode* newHead=head;
        ListNode* prev=NULL;
        while(temp){
            tem--;
            temp=temp->next;
            if(tem==0 && temp){
                ListNode* t=temp->next;
                temp->next=NULL;
                if(newHead==head){
                    head=reverse(newHead).second;
                }
                pair p=reverse(newHead);
                if(prev) prev->next=p.second;
                prev=p.first;

                temp=t;
                newHead=t;
                tem=k-1;
            }
            if(temp==NULL){
                prev->next=newHead;
            }

        }
        return head;
    }
};