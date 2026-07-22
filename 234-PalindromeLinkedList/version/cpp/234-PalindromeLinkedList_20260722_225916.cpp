// Last updated: 22/7/2026, 10:59:16 pm
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
13    bool isPalindrome(ListNode* head) {
14        if(head==NULL || head->next==NULL){
15            return true;
16        }
17        vector<int> arr;
18        ListNode* temp=head;
19        while(temp!=NULL){
20            arr.push_back(temp->val);
21            temp=temp->next;
22        }
23        int n=arr.size();
24        int start=0,end=n-1;
25        while(end>=start){
26            if(arr[start]!=arr[end]){
27                return false;
28            }
29            start++;
30            end--;
31        }
32        return true;
33    }
34};