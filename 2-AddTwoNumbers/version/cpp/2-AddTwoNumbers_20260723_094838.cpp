// Last updated: 23/7/2026, 9:48:38 am
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
14        vector<int> nums1,nums2;
15        ListNode* temp1=l1;
16        ListNode* temp2=l2;
17        int carry=0;
18
19        while(temp1){
20            int ult=temp2?temp2->val:0;
21            temp1->val+=(ult+carry);
22            if(temp1->val>9){
23                temp1->val-=10;
24                carry=1;
25            }else{
26                carry=0;
27            }
28            if(!temp1->next && (!temp2 || !temp2->next)){
29                break;
30            }else if(!temp1->next){
31                temp1->next=new ListNode(0);
32            }
33
34            temp1=temp1->next;
35            if(temp2) temp2=temp2->next;
36        }
37
38        if(carry==1){
39            temp1->next=new ListNode(1);
40        }
41
42        return l1;
43    }
44};