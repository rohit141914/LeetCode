class Solution {
public:
    static bool mycheck(vector<int> &a,vector<int> &b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]<=b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        if (intervals.empty()) {
            return res;
        }
        sort(intervals.begin(),intervals.end(),mycheck);
        int l=intervals.size();
        vector<int>mark;
        mark=intervals[0];
        for(int i=1;i<l;i++){
            if(mark[1]>=intervals[i][0]){
                mark[1]=max(mark[1],intervals[i][1]);
            }
            else{
                res.push_back(mark);
                mark=intervals[i];
            }
        }
        res.push_back(mark);
        return res;
    }
};