// Last updated: 7/4/2026, 6:53:48 pm
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
18        bool isSecondLarger=false;
19        while(temp1 && temp2){
20            temp1=temp1->next;
21            temp2=temp2->next;
22            if(!temp1 && temp2){
23                isSecondLarger=true;
24            }
25        }
26        temp1=l1; temp2=l2;
27        if(isSecondLarger){
28            temp1=l2;
29            temp2=l1;
30        }
31
32        ListNode* prev=NULL;
33        while(temp1){
34            if(temp2) temp1->val+=(temp2->val+carry);
35            else temp1->val+=carry;
36            if(temp1->val>9){
37                temp1->val-=10;
38                carry=1;
39            }else{
40                carry=0;
41            }
42            prev=temp1;
43            temp1=temp1->next;
44            if(temp2) temp2=temp2->next;
45        }
46        if(carry==1){
47            prev->next=new ListNode(1);
48        }
49
50        return isSecondLarger?l2:l1;
51    }
52};