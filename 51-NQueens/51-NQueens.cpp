// Last updated: 17/8/2025, 11:33:30 pm
class Solution {
public:
        void recur(int index, int n, vector<vector<bool>> &mat, vector<pair<int,int>> pairs, vector<vector<vector<bool>>> &ans){
        if(index>=n){
            ans.push_back(mat);
            return;
        }
        for(int i=0;i<n;i++){ //loop for rows (we're going column wise)
            pair<int,int> p;
            p.first=i;
            p.second=index;
            bool good=true;
            if(index!=0){
                for(pair<int,int> pr:pairs){
                    if(pr.first!=p.first && pr.second!=p.second){
                        if(abs(pr.first-p.first)!=abs(pr.second-p.second)) continue;
                        else{
                            good=false;
                            break;
                        }
                    }else{
                        good=false;
                        break;
                    }
                }
                if(!good && i==n-1) return;
                if(!good) continue;
            }
            pairs.push_back(p);
            mat[i][index]=true;
            recur(index+1,n,mat,pairs,ans);
            pairs.pop_back();
            mat[i][index]=false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<bool>> mat(n, vector<bool>(n, false));
        vector<vector<vector<bool>>> ans;
        vector<pair<int,int>> pairs;
        recur(0,n,mat,pairs,ans);
        vector<vector<string>> ansFinal2;
        vector<string> ansFinal1;
        for(vector<vector<bool>> vec2:ans){
            for(vector<bool> vec1:vec2){
                string s;
                for(bool i:vec1){
                    if(i==true){
                        s.push_back('Q');
                    }else s.push_back('.');
                }
                ansFinal1.push_back(s);
            }
            ansFinal2.push_back(ansFinal1);
            ansFinal1.clear();
        }
        return ansFinal2;
    }
};