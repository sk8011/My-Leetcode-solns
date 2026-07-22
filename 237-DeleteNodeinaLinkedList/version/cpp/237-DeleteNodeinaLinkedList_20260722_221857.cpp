// Last updated: 22/7/2026, 10:18:57 pm
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* node) {
12        ListNode* prev;
13        while(node->next){
14            node->val=node->next->val;
15            prev=node;
16            node=node->next;
17        }
18        prev->next=NULL;
19        return;
20    }
21};