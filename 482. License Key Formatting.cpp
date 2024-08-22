class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
         string result="";
        int count=0;
        for(int i=S.length()-1;i>=0;i--){                      
            if(count==K && S[i]!='-'){
                result= '-'+ result;
                count=0;
            }
            if(S[i]!='-'){
                 result=(char)toupper(S[i])+result;
                 count++;
            }                
        }
        return result;
    }
};
