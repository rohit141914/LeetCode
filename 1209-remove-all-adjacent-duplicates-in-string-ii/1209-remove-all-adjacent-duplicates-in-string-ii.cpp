class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>ve;
        pair<char,int>t;
        for(auto a:s){
            if(ve.size()>0 && a==ve.back().first){
                ve.back().second++;
                if(ve.back().second==k) ve.pop_back();
            }
            else{
                ve.push_back({a,1});
            }
        }
        string res="";
        for(auto a :ve){
            for(int i=0;i<a.second;i++){
                res+=a.first;
            }
        }
        return res;
    }
};