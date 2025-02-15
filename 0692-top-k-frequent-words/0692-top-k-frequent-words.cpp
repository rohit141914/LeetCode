class Solution {
public:
    struct my{
        bool operator()(pair<string,int>&a,pair<string,int>&b){
            if(a.second!=b.second){
            return a.second>b.second;
            }
            return a.first<b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>mp;
       for(auto a:words){
        mp[a]++;
       } 
       priority_queue<pair<string,int>,vector<pair<string,int>>,my>p;
       for(int i=0;i<k;i++){
        auto a=*mp.begin();
        // cout<<a.first;
        p.push({a.first,a.second});
        mp.erase(mp.begin());
       }
       while(mp.empty()==false){
        auto a=*mp.begin();
        pair<string,int>t=p.top();
        cout<<t.first;
        if(a.second>t.second){
            p.pop();
            p.push({a.first,a.second});
        }
        if(a.second==t.second&&a.first<t.first){
            p.pop();
            p.push({a.first,t.second});
        }
        mp.erase(mp.begin());
       }
       vector<string>ans;
       while(p.empty()==false){
        ans.push_back(p.top().first);
        p.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};