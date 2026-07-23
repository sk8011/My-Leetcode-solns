// Last updated: 23/7/2026, 9:45:01 am
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
18        while(temp2){
19            int t=temp1->val+temp2->val+carry;
20            if(t>=10){
21                t-=10;
22                carry=1;
23            }else{
24                carry=0;
25            }
26            temp1->val=t;
27            temp2=temp2->next;
28            if(temp2 && !temp1->next){
29                temp1->next=new ListNode(0);
30            }
31            else if(!temp2 && !temp1->next && carry==1){
32                temp1->next=new ListNode(1);
33                carry=0;
34            }
35            temp1=temp1->next;
36        }
37        ListNode* prev;
38        while(temp1){
39            int t=temp1->val+carry;
40            if(t>=10){
41                t-=10;
42                carry=1;
43            }else{
44                carry=0;
45            }
46            temp1->val=t;
47            prev=temp1;
48            temp1=temp1->next;
49        }
50        if(carry!=0){
51            prev->next=new ListNode(1);
52        }
53        return l1;
54    }
55};