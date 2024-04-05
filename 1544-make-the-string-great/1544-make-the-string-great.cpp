class Solution {
public:
    string makeGood(string s) {
         stack<char> t;
        int ln=s.length();
        // for(int i=0;i<ln;i++){
        int i=0;
        while(i<ln){
            if(t.empty()){
                t.push(s[i]);
                i++;
            }
            else if(t.top()!=s[i]&& (tolower(s[i])==t.top() ||tolower(t.top())==s[i])){
                t.pop();
                i++;
            }
            else{
                t.push(s[i]);
                i++;
            }
        }
        s.clear();
        while(!t.empty()){
            s=s+t.top();
            t.pop();
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};