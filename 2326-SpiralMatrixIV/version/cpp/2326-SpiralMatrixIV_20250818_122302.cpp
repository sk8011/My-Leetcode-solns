// Last updated: 18/8/2025, 12:23:02 pm
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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m,vector<int>(n));
        vector<int> ans(m*n,-1);
        ListNode* temp=head;
        int i=0;
        while(temp){
            ans[i]=temp->val;
            temp=temp->next;
            i++;
        }
        int left=0,right=n-1,top=0,bottom=m-1;
        int c=0;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                matrix[top][i]=ans[c];
                c++;
            }
            top++;

            for(int i=top;i<=bottom;i++){
                matrix[i][right]=ans[c];
                c++;
            }
            right--;
            
            if(bottom>=top){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=ans[c];
                    c++;
                }
                bottom--;
            }
            
            if(right>=left){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=ans[c];
                    c++;
                }
                left++;
            }
        }
        return matrix;
    }
};