// Last updated: 17/8/2025, 11:34:12 pm
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> nums1,nums2;
        ListNode* temp1=l1;
        while(temp1!=NULL){
            nums1.push_back(temp1->val);
            temp1=temp1->next;
        }
        ListNode* temp2=l2;
        while(temp2!=NULL){
            nums2.push_back(temp2->val);
            temp2=temp2->next;
        }
        vector<int> c;
        int carry=0;

        int i=0,j=0;
        int n1=nums1.size()-1;
        int n2=nums2.size()-1;
        int temp;
        while(i<=n1 && j<=n2){
            temp=carry+nums1[i]+nums2[j];
            c.push_back(temp%10);
            temp/=10;
            if(temp>0){
                carry=1;
            }else{
                carry=0;
            }
            i++;
            j++;
        }
        while(i<=n1){
            temp=carry+nums1[i];
            c.push_back(temp%10);
            temp/=10;
            if(temp>0){
                carry=1;
            }else{
                carry=0;
            }
            i++;
        }
        while(j<=n2){
            temp=carry+nums2[j];
            c.push_back(temp%10);
            temp/=10;
            if(temp>0){
                carry=1;
            }else{
                carry=0;
            }
            j++;
        }
        if(carry==1){
            c.push_back(1);
            temp=0;
        }

        for(int e:c){
            cout<<e<<" ";
        }

        ListNode* head=new ListNode();
        ListNode* curr=head;
        i=0;
        while(i<c.size()){
            curr->val=c[i];
            if(i==c.size()-1){
                curr->next=NULL;
                break;
            }
            curr->next=new ListNode();
            curr=curr->next;
            i++;
        }
        return head;
    }
};