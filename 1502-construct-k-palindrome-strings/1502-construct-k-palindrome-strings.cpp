class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        }
        int l=s.length();
        if(l<k){
            return false;
        }
        int c=0;
        for(auto a:mp){
            if(a.second%2==1)c++;
        }
        if(c<=k){
            return true;
        }
        return false;
    }
};