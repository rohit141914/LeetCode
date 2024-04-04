class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') c++;
            else if(s[i]==')'){c--;}
            ans=max(ans,c);
        }
        return ans;
    }
};