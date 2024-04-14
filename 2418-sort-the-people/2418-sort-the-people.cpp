class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
     
        unordered_map<int,string> mp;
        int ln=names.size();
        vector<string> res;
        vector<int>ans(100001,-1);
        for(int i=0;i<ln;i++){
            ans[heights[i]]=1;
            mp[heights[i]]=names[i];
        }
        for(int i=100000;i>=0;i--){
            if(ans[i]==1){
                string t=mp[i];
                res.push_back(t);
            }
        }
        return res;
    }
};