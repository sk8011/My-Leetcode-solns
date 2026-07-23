// Last updated: 23/7/2026, 9:48:50 am
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode* temp1=l1;
15        ListNode* temp2=l2;
16        int carry=0;
17
18        while(temp1){
19            int ult=temp2?temp2->val:0;
20            temp1->val+=(ult+carry);
21            if(temp1->val>9){
22                temp1->val-=10;
23                carry=1;
24            }else{
25                carry=0;
26            }
27            if(!temp1->next && (!temp2 || !temp2->next)){
28                break;
29            }else if(!temp1->next){
30                temp1->next=new ListNode(0);
31            }
32
33            temp1=temp1->next;
34            if(temp2) temp2=temp2->next;
35        }
36
37        if(carry==1){
38            temp1->next=new ListNode(1);
39        }
40
41        return l1;
42    }
43};