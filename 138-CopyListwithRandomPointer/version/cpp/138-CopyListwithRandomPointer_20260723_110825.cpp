// Last updated: 23/7/2026, 11:08:25 am
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8    
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    Node* copyRandomList(Node* head) {
20        Node* newHead=new Node(0);
21        Node* newTemp=newHead;
22        vector<int> indices;
23        Node* temp=head;
24        while(temp){
25            Node* t=temp->random;
26            newTemp->next=new Node(temp->val);
27            newTemp=newTemp->next;
28            if(t==NULL){
29                indices.push_back(-1);
30                temp=temp->next;
31                continue;
32            }
33            Node* temp1=head;
34            int i=0;
35            while(temp1){
36                if(t==temp1){
37                    indices.push_back(i);
38                    break;
39                }
40                i++;
41                temp1=temp1->next;
42            }
43            temp=temp->next;
44        }
45        // for(int i:indices){
46        //     cout<<i<<" ";
47        // }
48
49        newTemp=newHead->next;
50        int i=0;
51        while(newTemp){
52            Node* temp2=newHead->next;
53            int ind=0;
54            if(indices[i]!=-1){
55                while(ind<indices[i]){
56                    temp2=temp2->next;
57                    ind++;
58                }
59            }else{
60                temp2=NULL;
61            }
62            newTemp->random=temp2;
63            newTemp=newTemp->next;
64            i++;
65        }
66        return newHead->next;
67    }
68};