class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream s(sentence);

        string a;
        for(int i = 1; s>>a; i++){
            if(a.substr(0, searchWord.length()) == searchWord) 
            return i;
        }
        return -1;
    }
};
