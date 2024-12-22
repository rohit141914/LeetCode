class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        }
        for(auto a:t){
            mp[a]--;
        }
        int c=0;
        for(auto x:mp){
            if(x.second<0){
                c+=abs(x.second);
                continue;
            }
            c+=x.second;
        }
        return c;
    }
};