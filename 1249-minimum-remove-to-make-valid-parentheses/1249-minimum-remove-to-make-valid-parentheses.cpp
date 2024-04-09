class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> u;
        int ln=s.length();
        
        for(int i=0;i<ln;i++){
            if(s[i]=='(') u.push(i);
            else if( s[i]==')'){
                if(!u.empty()) u.pop();
                else s[i]='-';
            }
        }
        while(!u.empty()) {
            int a=u.top();
            s[a]='-';
            u.pop();
        }
        int st=0;
        for(int i=0;i<ln;i++){
            if(s[i]!='-'){
                s[st]=s[i];
                st++;
            }
         
        }
        return s.substr(0,st);
    }
};