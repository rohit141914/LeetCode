class Solution {
public:
    bool checkValidString(string s) {
        int ln=s.length();
        stack<int> t;
        stack<int> c;
        for(int i=0;i<ln;i++){
            if(s[i]=='('){
                t.push(i);
            }
            if(s[i]=='*') c.push(i);
            else if(s[i]==')'){
               if(!t.empty()) t.pop();
                else if(!c.empty()) c.pop();
                else {
                    return false;
                }
            }
            
        }
      
        
        while(!t.empty()){
            if(c.empty()) return false;
            
            else if(t.top()<c.top()){
                t.pop();
                c.pop();
            }
            else{
                return false;
            }
        }
        return true;
    }
};