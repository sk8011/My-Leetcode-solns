// Last updated: 10/1/2026, 8:55:57 am
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Codec {
11public:
12
13    // Encodes a tree to a single string.
14    string serialize(TreeNode* root) {
15        if(!root) return "";
16        queue<TreeNode*> qq;
17        qq.push(root);
18        string s="[";
19        while(!qq.empty()){
20            TreeNode* temp=qq.front();
21            if(temp) s+=to_string(temp->val)+",";
22            else s+="null,";
23            qq.pop();
24            if(temp){
25                qq.push(temp->left);
26                qq.push(temp->right);
27            }
28        }
29        // cout<<s;
30        while(s.size()>5 && s.substr(s.size()-5)=="null,"){
31            s=s.substr(0,s.size()-5);
32        }
33        s=s.substr(0,s.size()-1);
34        s+="]";
35        return s;
36    }
37
38    // Decodes your encoded data to tree.
39    TreeNode* deserialize(string data) {
40        cout<<data;
41        int n=data.size();
42        if(n==0) return NULL;
43        queue<TreeNode*> qq;
44        int pos=data.find(",");
45        if(pos==string::npos){
46            pos=n-1;
47        }
48        int ind=pos+1;
49        TreeNode* root=new TreeNode(stoi(data.substr(1,pos-1)));
50        qq.push(root);
51        while(ind<n-1){
52            TreeNode* temp=qq.front();
53            qq.pop();
54            int pos1=data.find(",",ind);
55            if(pos1==string::npos) pos1=n-1;
56            string s1=data.substr(ind,pos1-ind);
57            if(s1!="null"){
58                temp->left=new TreeNode(stoi(s1));
59                qq.push(temp->left);
60            }
61            ind=pos1+1;
62            if(ind>=n) break;
63            int pos2=data.find(",",ind);
64            if(pos2==string::npos) pos2=n-1;
65            string s2=data.substr(ind,pos2-ind);
66            if(s2!="null"){
67                temp->right=new TreeNode(stoi(s2));
68                qq.push(temp->right);
69            }
70            ind=pos2+1;
71        }
72        return root;
73    }
74};
75
76// Your Codec object will be instantiated and called as such:
77// Codec ser, deser;
78// TreeNode* ans = deser.deserialize(ser.serialize(root));