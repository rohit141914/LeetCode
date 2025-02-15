class Solution {
public:
    struct my{
        bool operator()(pair<char,int>&a,pair<char,int>&b){
            return a.second<b.second;
        }
    };
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        }
        priority_queue<pair<char,int>,vector<pair<char,int>>,my>p;
        for(auto a:mp){
            p.push({a.first,a.second});
        }
        pair<char,int>t;
        s.clear();
        while(p.empty()==false){
            t=p.top();
            p.pop();
            for(int i=0;i<t.second;i++){
                s+=t.first;
            }
        }
        return s;
    }
};