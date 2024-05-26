class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> m;
        for(auto x:items1){
            m[x[0]]+=x[1];
        }
        for(auto x:items2){
            m[x[0]]+=x[1];
        }
        items1.clear();
        vector<int> t;
        for(auto x:m){
            t.push_back(x.first);
            t.push_back(x.second);
            items1.push_back(t);
            t.clear();
        }
        return items1;
    }
};