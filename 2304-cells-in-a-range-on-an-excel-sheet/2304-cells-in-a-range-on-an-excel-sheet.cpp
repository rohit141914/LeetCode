class Solution {
public:
    vector<string> cellsInRange(string s) {
        string t="";
        t+=s[1];
        int start=stoi(t);
        t[0]=s[4];
        vector<string>res;
        int end=stoi(t);
        t.clear();
        for(char i=s[0];i<=s[3];i++){
            for(char j=s[1];j<=s[4];j++){
                t+=i;
                t+=j;
                res.push_back(t);
                t.clear();
            }
        }
        return res;
    }
};