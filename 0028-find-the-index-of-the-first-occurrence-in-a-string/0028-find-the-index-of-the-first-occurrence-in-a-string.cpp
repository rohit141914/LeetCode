class Solution {
public:
    int strStr(string haystack, string needle) {
        int ln1=haystack.size();
        int ln2=needle.size();
        int length=0;

        for(int i=0;i<ln1-ln2+1;i++){
            if(haystack[i]==needle[0]){
                length=0;
                for(int j=0;j<ln2;j++){
                    if(haystack[i+j]==needle[j]) length++;
                    else{break;}
                }
                if(length==ln2) {
                    return i;
                }
            }
        }
        return -1;
    }
};