// Last updated: 17/8/2025, 11:33:18 pm
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int tempLen=0;
        int count=0;
        int start=0;
        int lastTemp=0;
        bool last=false;
        string tempSpace=" ";
        if(words.size()==1){
            while(words[0].size()<maxWidth){
                words[0]+=" ";
            }
            return words;
        }
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            tempLen+=words[i].size();
            count++;
            if(tempLen+count-1>maxWidth || i==words.size()-1){
                string temp;
                int numWord=0;
                if(i==words.size()-1 && tempLen+count-1<=maxWidth){
                    tempLen+=words[i].size();
                    numWord=1;
                    last=true;
                }
                tempLen-=words[i].size();
                numWord+=i-start-1;
                int space=maxWidth-tempLen;
                if(space<numWord){}
                else{
                    if(numWord!=0){
                        for(int k=1;k<(space/numWord);k++){
                            tempSpace+=" ";
                        }
                    }
                }
                if(numWord==0 || numWord==1){
                    temp+=words[start];
                    for(int j=0;j<(maxWidth-tempLen);j++){
                        temp+=" ";
                    }
                    if(numWord==1){
                        temp+=words[start+1];
                        if(last){
                            temp=words[start];
                            temp+=" ";
                            temp+=words[start+1];
                            while(temp.size()<maxWidth){
                                temp+=" ";
                            }
                        }
                    }
                }else{
                    if(last){
                        for(int j=start;j<i+1;j++){
                            temp+=words[j];
                            if(j!=i){
                                temp+=" ";
                            }
                        }
                        while(temp.size()<maxWidth){
                            temp+=" ";
                        }
                    }else{
                        int x=space%numWord;
                        for(int j=start;j<i;j++){
                            temp+=words[j];
                            if(j!=i-1){
                                temp+=tempSpace;
                            }
                            if(x){
                                temp+=" ";
                                x--;
                            }
                        }
                    }
                }
                ans.push_back(temp);
                count=1;
                start=i;
                tempLen=words[i].size();
                tempSpace=" ";
            }
        }
        if(!last){
            string temp=*words.rbegin();
            while(temp.size()<maxWidth){
                temp+=" ";
            }
            ans.push_back(temp);
        }
        return ans;
    }
};