class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        bool vowel = false;
        bool cons = false;
        if(n < 3) return false;
        for(int i = 0; i < n; i++){
            char ch = word[i];
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    vowel = true;
                }
                else{
                    cons = true;
                }
            }
            else if (ch >= '0' && ch <= '9'){

            }
            else{
                return false;
            }
        }
        return vowel && cons;
    }
};
