class Solution {
public:
    int minLength(string s) {
        stack<char> q;
        int ln=s.length();
        for(int i=0;i<ln;i++){
            if(q.empty()) q.push(s[i]);
            else if((q.top()=='A' &&s[i]=='B')|| (q.top()=='C'&&s[i]=='D')) q.pop();
            else q.push(s[i]);
        }
        s.clear();
        while(!q.empty()){
            s=q.top()+s;
            q.pop();
         }
        return s.length();
    }
};