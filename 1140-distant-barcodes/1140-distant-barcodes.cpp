class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& bar) {
        if(bar.size()<2){
            
            return bar;
        }
        unordered_map<int,int>mp;
        for(auto a:bar){
            mp[a]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto a:mp){
            p.push({a.second,a.first});
        }

        bar.clear();
        while(p.size()>0){
            pair<int,int> a=p.top();
            bar.push_back(a.second);
            a.first--;
            p.pop();
            if(p.size()==0){
                return bar;
            }
            pair<int,int> b=p.top();
            bar.push_back(b.second);
            p.pop();
            b.first--;
            if(a.first>0){
                p.push(a);
            }
            if(b.first>0){
                p.push(b);
            }
        }
        return bar;
    }
};