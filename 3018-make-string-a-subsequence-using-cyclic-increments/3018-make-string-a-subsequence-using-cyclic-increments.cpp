class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j=0;
        // int c=0;
        for(int i=0;i<str1.length() && j<str2.length();i++){
            if(str1[i]==str2[j]) j++;
            else if((str1[i]=='z'&& str2[j]=='a')) {
                j++;
            }
            else if(str1[i]==str2[j]-1){
                j++;
                // c++;
            }
        }
        if( j==str2.length()){
            return true;
        }
        return false;
    }
};