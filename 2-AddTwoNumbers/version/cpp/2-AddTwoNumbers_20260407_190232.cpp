// Last updated: 7/4/2026, 7:02:32 pm
// best solution possible EVER!!!
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
19        while(temp1 && temp2){
20            temp1->val+=(temp2->val+carry);
21            if(temp1->val>9){
22                temp1->val-=10;
23                carry=1;
24            }else{
25                carry=0;
26            }
27            if(!temp1->next && !temp2->next){
28                break;
29            }else if(!temp1->next){
30                temp1->next=new ListNode(0);
31            }else if(!temp2->next){
32                temp2->next=new ListNode(0);
33            }
34
35            temp1=temp1->next;
36            temp2=temp2->next;
37        }
38
39        if(carry==1){
40            temp1->next=new ListNode(1);
41        }
42
43        return l1;
44    }
45};