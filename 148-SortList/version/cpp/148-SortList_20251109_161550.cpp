// Last updated: 9/11/2025, 4:15:50 pm
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
    ListNode* sortList(ListNode* head) {
        ListNode* res=new ListNode(-1,head);
        ListNode* temp=head;
        priority_queue<int,vector<int>,greater<int>> pq;
        while(temp!=NULL){
            pq.push(temp->val);
            temp=temp->next;
        }
        temp=res;
        while(!pq.empty()){
            temp->next->val=pq.top();
            temp=temp->next;
            pq.pop();
        }
        return res->next;
    }
};