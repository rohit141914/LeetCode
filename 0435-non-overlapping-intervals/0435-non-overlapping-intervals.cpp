class Solution {
public:
    static bool mycom(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int l=intervals.size();
        sort(intervals.begin(),intervals.end(),mycom);
        int res=1;
        int mark=0;
        // for(auto a:intervals){
        //     cout<<a[0]<<" "<<a[1]<<"     ";
        // }
        for(int i=1;i<intervals.size();i++){
            if(intervals[mark][1]<=intervals[i][0]){
                mark=i;
                res++;
            }
        }
        return l-res;
    }
};