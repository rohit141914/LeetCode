class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>m;
        for(auto a:s){
            m[a]++;
        }
        map<int,int, greater<int>>mp;
        for(auto a:m){
            mp[a.second]++;
        }
        int ans=0;
        for(auto a:mp){
            // cout<<a.first<<" "<<a.second<<"  ";
            if(a.first==1){
                ans+=a.second-1;
                continue;
            }
            if(a.second!=1){
                ans+=a.second-1;
                mp[a.first-1]+=a.second-1;
            }
        }
        return ans;
    }
};