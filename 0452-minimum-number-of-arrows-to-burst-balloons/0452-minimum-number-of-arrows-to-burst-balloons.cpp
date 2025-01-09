class Solution {
public:
    static bool mycom(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),mycom);
        int mark=0;
        int res=1;
        int l=points.size();
        for(int i=1;i<l;i++){
            if(points[mark][1]<points[i][0]){
                mark=i;
                res++;
            }
        }
        return res;
    }
};