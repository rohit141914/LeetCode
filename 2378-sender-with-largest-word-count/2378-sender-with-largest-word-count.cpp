class Solution {
public:
    struct m{
        bool operator()(pair<string,int>&a,pair<string,int>&b){
            if(a.second==b.second){
                return a.first>b.first;
            }
           return a.second>b.second;
        }
    };
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>mp;
        int l=messages.size();
        for(int i=0;i<l;i++){
            int c=0;
            c=count(messages[i].begin(),messages[i].end(),' ')+1;
            mp[senders[i]]+=c;
        }      
        priority_queue<pair<string,int>,vector<pair<string,int>>,m>p;
        for(auto a:mp){
            p.push({a.first,a.second});
            if(p.size()>1){
                p.pop();
            }
        }
        return p.top().first;
    }
};