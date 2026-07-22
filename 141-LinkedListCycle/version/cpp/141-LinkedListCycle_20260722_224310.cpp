// Last updated: 22/7/2026, 10:43:10 pm
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9
10 //tortoise and hare method
11class Solution {
12public:
13    bool hasCycle(ListNode *head) {
14        ListNode* slow=head;
15        ListNode* fast=head;
16        while(fast && fast->next){
17            slow=slow->next;
18            fast=fast->next->next;
19            if(slow==fast){
20                return true;
21            }
22        }
23        return false;
24    }
25};