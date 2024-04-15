class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int ln=s.length();
        for(int i=0;i<ln;i++){
            if(st.empty()) st.push(s[i]);
            else if(st.top()==s[i]) st.pop();
            else st.push(s[i]);
        }
        s.clear();
        while(!st.empty()){
            s=st.top()+s;
            st.pop();
        }
        return s;
    }
};