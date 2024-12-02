class Solution {
public:
    int isPrefixOfWord(string s, string se) {
        int l=s.length();
        int l3=se.length();
        int c=1;
        for(int i=0;i<l;i++){
            if(s[i]==' '){
                c++;
                continue;
            }
            for(int j=0;j<l3;j++){
                if(i==0 || s[i-1]==' '){

                if(i+j>l-1||s[i+j]!=se[j]){
                    break;
                }
                if((s[i+j]==se[j])){
                if(j==l3-1){
                    return c;
                }
                    continue;
                }
            }
                }
        }
        return -1;
    }
};