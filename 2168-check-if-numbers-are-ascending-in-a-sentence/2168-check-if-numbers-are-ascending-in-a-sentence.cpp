class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=INT_MIN;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                c=c*10+s[i]-'0';
            }
            else if( c!=0){
                if(prev>=c){
                    return false;
                }
                prev=c;
                c=0;
            }
        }
        if(s[s.length()-1]>='0' && s[s.length()-1]<='9'){
            if(prev>=c){
                return false;
                }
        }
        return true;

    }
};