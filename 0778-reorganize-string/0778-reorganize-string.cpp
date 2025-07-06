class Solution {
public:
    struct my{
        bool operator()(pair<int,char>&a,pair<int,char>&b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first<b.first;
        }
    };
    string reorganizeString(string s) {
        if(s.length()<2){
            return s;
        }
        priority_queue<pair<int,char>,vector<pair<int,char>>,my>p;
        unordered_map<char,int>m;
        for(auto a:s){
            m[a]++;
        }
        for(auto a:m){
            p.push({a.second,a.first});
        }
        string ans="";
        while(p.size()>1){
            pair<int,char>t1=p.top();
            p.pop();
            pair<int,char>t2=p.top();
            p.pop();
            ans=ans+t1.second+t2.second;
            if(t1.first>1)p.push({t1.first-1,t1.second});
            if(t2.first>1)p.push({t2.first-1,t2.second});
        }
        if(p.size()>0){
            pair<int,char>t=p.top();
            int l=ans.length();
            if(t.first>1||ans[l-1]==t.second){
                return "";
            }
            ans+=t.second;
        }

        return ans;
    }
};