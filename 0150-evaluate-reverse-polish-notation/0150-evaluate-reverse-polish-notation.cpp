class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>st;
        for(auto a:t){
            if(a=="*"||a=="-"||a=="+"||a=="/"){
                if(st.size()<2){
                    return -1;
                }
                int b=st.top();
                st.pop();
                int n=st.top();
                st.pop();
                if(a=="*"){
                    n=n*b;
                }
                if(a=="-"){
                    n=n-b;
                }
                if(a=="/"){
                    n=n/b;
                }
                if(a=="+"){
                    n=n+b;
                }
                st.push(n);
            }
            else{
                int t=stoi(a);
                st.push(t);
            }
        }
        if(st.size()!=1){
            return -1;
        }
        return st.top();
    }
};