class Solution {
public:
    string solve(string a,string b){
        int l=b.length();
        for(int i=0;i<l;i++){
            if(b[i]==a[0]){
            int c=0;
            for(int j=0;j<a.length()&&i+j<l;j++){
                if(a[j]==b[i+j])c++;
                if(c==a.length()){
                    return a;
                }
            }
            }
        }
        return "";
    }
    vector<string> stringMatching(vector<string>& words) {
        int l=words.size();
        vector<string>res;
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                if(i==j||words[i].size()>words[j].size())continue;
                string t=solve(words[i],words[j]);
                if(t!=""){
                    res.push_back(t);
                    break;
                }
            }
        }
        return res;
    }
};