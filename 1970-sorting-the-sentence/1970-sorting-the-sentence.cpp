class Solution {
public:
    string sortSentence(string s) {
        map<string,string>mp;
        string t="";
        string key="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                mp[key]=t;
                t="";
                key="";
            }
            else if(s[i]>='0' && s[i]<='9'){
                key+=s[i];
            }
            else{
                t=t+s[i];
            }
        }
        mp[key]=t;
        s.clear();
        for(auto x: mp){
            s=s+x.second+" ";
        }
        return s.substr(0,s.length()-1);
    }
};