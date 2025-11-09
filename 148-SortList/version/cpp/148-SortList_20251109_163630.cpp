// Last updated: 9/11/2025, 4:36:30 pm
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
        vector<int> vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        temp=res;
        for(int e:vec){
            temp->next->val=e;
            temp=temp->next;
        }
        return res->next;
    }
};