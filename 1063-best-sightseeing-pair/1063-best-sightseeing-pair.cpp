class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int pre_max=values[0];
        int l=values.size();
        int res=pre_max;
        for(int i=1;i<l;i++){
            res=max(res,pre_max+values[i]-i);
            pre_max=max(pre_max,values[i]+i);
        }
        return res;
    }
};