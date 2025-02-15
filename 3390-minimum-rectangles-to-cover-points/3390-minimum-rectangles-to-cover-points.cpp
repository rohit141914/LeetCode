class Solution {
public:
    static bool m(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(),points.end(),m);
        for(auto a:points){
            cout<<a[0];
        }
        int c=0;
        vector<int> pp=*points.begin();
        int p=pp[0];
        for(auto a:points){
            if(abs(p-a[0])>w){
                c++;
                p=a[0];
            }
        }
        return c+1;
    }
};