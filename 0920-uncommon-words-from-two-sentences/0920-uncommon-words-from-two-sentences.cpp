class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        string t="";
        for(auto x: s1){
            if(x==' '){
                mp[t]++;
                t="";
            }
            else{
                t=t+x;
            }
        }
        mp[t]++;
        t="";
        for(auto x: s2){
            if(x==' '){
                mp[t]++;
                t="";
            }
            else{
                t=t+x;
            }
        }
        mp[t]++;
        t="";

        vector<string>ans;
        for(auto x: mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};