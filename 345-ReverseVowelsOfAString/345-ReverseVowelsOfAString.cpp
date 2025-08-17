// Last updated: 17/8/2025, 11:32:06 pm
class Solution {
public:
    string reverseVowels(string s) {
        string vowels;
        vector <int> indices;
        for(int i=0;i<s.size();i++){
            int asciiVal=s[i];
            if((asciiVal == 97 || asciiVal == 101 || asciiVal == 105 || 
            asciiVal == 111 || asciiVal == 117 ||
            asciiVal == 65 || asciiVal == 69 || asciiVal == 73 || 
            asciiVal == 79 || asciiVal == 85)){
                indices.push_back(i);
                vowels.push_back(s[i]);
            }
        }
        int end=vowels.size()-1;
        for(int i:indices){
            s[i]=vowels[end];
            end--;
        }
        return s;
    }
};