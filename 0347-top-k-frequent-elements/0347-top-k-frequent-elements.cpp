class Solution {
public:
    struct my{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            mp[a]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,my>p;
        for(int i=0;i<k;i++){
            auto a=*mp.begin();
            p.push({a.first,a.second});
            mp.erase(mp.begin());
        }
        while(mp.empty()==false){
            auto a=*mp.begin();
            pair<int,int>t=p.top();
            if(a.second>t.second){
                p.pop();
                p.push({a.first,a.second});
            }
            mp.erase(mp.begin());
        }
        vector<int>ans;
        while(p.empty()==false){
            ans.push_back(p.top().first);
            p.pop();
        }
        return ans;
    }
};