class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        
        int l1=s.length();
        int l2=t.length();
        
        
        for(int i=0;i<l1;i++){
            if(s[i]!='#') a.push(s[i]);
            else{
                if(a.empty()) continue;
                else a.pop();
            }
        }
        for(int i=0;i<l2;i++){
            if(t[i]!='#') {
                b.push(t[i]);       
            }
            else{
                if(b.empty()) continue;
                else {
                    b.pop();
            }
        }
        }
        while(!a.empty()&&!b.empty()){
             if(a.top()==b.top()){
                a.pop();
                b.pop();
            }
            else {
                cout<<a.top()<<b.top();
                return false;
            }
        }
        if(a.size()==0&&b.size()==0){
            return 1;
        }
        return 0;
    }
};