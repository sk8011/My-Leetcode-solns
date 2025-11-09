// Last updated: 9/11/2025, 4:43:35 pm
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* node1=head;
        ListNode* node2=head;
        int temp=k;
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(temp--){
            cur=cur->next;
            if(prev==NULL) prev=head;
            else prev=prev->next;
        }
        node1=prev;
        while(cur!=NULL){
            cur=cur->next;
            node2=node2->next;
        }
        swap(node1->val,node2->val);
        return head;
    }
};