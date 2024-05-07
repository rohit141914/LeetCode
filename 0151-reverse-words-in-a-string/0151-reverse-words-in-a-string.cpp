class Solution {
public:
    string reverseWords(string s) {
        string t="";
        string ans="";
        bool f=false;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                f=true;
                t=t+s[i];
            }
            else if(s[i]==' '&&f==true){
                // if(i!=s.length()-1){
                // }
                reverse(t.begin(),t.end());
                t=t+' ';
                ans=ans+t;
                t.clear();
                f=false;
            }
        }
        // t=t+' ';
        reverse(t.begin(),t.end());
                ans=ans+t;
                reverse(ans.begin(),ans.end());
                int ln=ans.size();
                if(ans[0]==' '){
                    return ans.substr(1,ln-1);
                }
                return ans.substr(0,ln);
    }
};