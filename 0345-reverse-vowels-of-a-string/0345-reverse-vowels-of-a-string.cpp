class Solution {
public:
    string reverseVowels(string s) {
        
        stack<char> a;
        set<char> u {'a','e','i','o','u','A','E','I','O','U'};
        int ln=s.length();
        for(int i=0;i<ln;i++){
            if(u.find(s[i])!=u.end()){
                a.push(s[i]);
            }
        }
           for(int i=0;i<ln;i++){
            if(u.find(s[i])!=u.end()){
            s[i]=a.top();
                a.pop();
            }
        }
        return s;
    }
};