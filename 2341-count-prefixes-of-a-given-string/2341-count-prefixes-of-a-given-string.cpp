class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        int ln=s.length();
        for(auto x:words){
            int l=x.length();
            for(int i=0;i<l&&ln;i++){
                if(x[i]==s[i]){
                    if(i+1==l)c++;
                }
                else{
                    break;
                }
            }
        }
        return c;
    }
};