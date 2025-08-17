// Last updated: 17/8/2025, 11:33:51 pm
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode();
        ListNode* temp=head;
        if(list1==NULL || list2==NULL){
            if(list1!=NULL){
                temp->next=list1;
            }
            else if(list2!=NULL){
                temp->next=list2;
            }
            return head->next;
        }

        // ListNode* temp1=list1;
        // while(temp1->next!=NULL){
        //     temp1=temp1->next;
        // }
        // temp1->next=new ListNode();

        // ListNode* temp2=list2;
        // while(temp2->next!=NULL){
        //     temp2=temp2->next;
        // }
        // temp2->next=new ListNode();


        while(list1!=NULL && list2!=NULL){
            int a1=list1->val;
            int a2=list2->val;
            if(a1>=a2){
                temp->next=list2;
                list2=list2->next;
            }
            else{
                temp->next=list1;
                list1=list1->next;
            }
            temp=temp->next;
        }

        if(list1!=NULL){
            temp->next=list1;
        }
        else if(list2!=NULL){
            temp->next=list2;
        }

        return head->next;
    }
};