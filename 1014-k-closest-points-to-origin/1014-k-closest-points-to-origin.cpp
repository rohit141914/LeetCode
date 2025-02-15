class Solution {
public:
    struct my{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            int da=((a.first*a.first)+(a.second*a.second));
            int db=((b.first*b.first)+(b.second*b.second));
            return da<=db;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,my>p;

        for(int i=0;i<k;i++){
            p.push({points[i][0],points[i][1]});
        }
        int l=points.size();
        for(int i=k;i<l;i++){
            p.push({points[i][0],points[i][1]});
            p.pop();
        }
        vector<vector<int>>ans;
        while(p.empty()==false){
            vector<int>tt;
            tt.push_back(p.top().first);
            tt.push_back(p.top().second);
            ans.push_back(tt);
            p.pop();
        }
        return ans;
    }
};