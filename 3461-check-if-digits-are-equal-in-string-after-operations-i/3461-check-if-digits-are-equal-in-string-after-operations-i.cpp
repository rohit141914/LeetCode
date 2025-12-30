class Solution {
public:
    bool hasSameDigits(string s) {

        string t="";
        int l=0;
        int r=0;
        while(s.length()>2){
            t="";
            l=s.length();
            for(int i=0;i<l-1;i++){
                 r=((s[i]-'0')+(s[i+1]-'0'))%10;
                 t+=to_string(r);
            }
            s=t;
        }
        return s[0]==s[1] ? true:false;
    }
};