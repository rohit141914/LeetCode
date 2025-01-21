class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int k=s.length();
        string st="";
        if(s==""){
            return true;
        }
        for(int i=0;i<k&&i<words.size();i++){
            st=st+words[i];
            if(st==s){
                return true;
            }
            if(s.find(st)==string::npos){
                return false;
            }
        }
        return false;
    }
};