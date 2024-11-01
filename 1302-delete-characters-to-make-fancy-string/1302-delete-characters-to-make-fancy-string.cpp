class Solution {
public:
    string makeFancyString(string s) {
        char prev=s[0];
        int c=1;
        string ans="";
        ans+=s[0];
        for(int i=1;i<s.length();i++){
            if(prev!=s[i]){
                c=1;
                prev=s[i];
                ans+=s[i];
            }
            else{
                c++;
                if(c>=3){
                    continue;
                }
                else{
                    ans+=s[i];
                }
                prev=s[i];
            }
        }
        return ans;
    }
};