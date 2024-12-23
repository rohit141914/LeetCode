class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        vector<vector<int>>ans;
        for(auto x:matches){
            mp[x[0]]++;
        }
        for(auto x:matches){
            if(mp.find(x[1])!=mp.end()){
                mp.erase(x[1]);
            }
        }
        vector<int> t;
        for(auto x:mp){
                t.push_back(x.first);
        }
        ans.push_back(t);
        t.clear();
        mp.clear();
        for(auto x:matches){
            mp[x[1]]++;
        }
        for(auto x:mp){
            if(x.second==1){
                t.push_back(x.first);
            }
        }
        ans.push_back(t);
    return ans;
    }
};