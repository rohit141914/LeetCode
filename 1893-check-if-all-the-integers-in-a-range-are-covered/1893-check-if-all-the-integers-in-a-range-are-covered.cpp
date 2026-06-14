class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        while(left<=right){
            bool flag=false;
            for(auto a:ranges){
                if(a[0]<=left && left<=a[1]){
                    left=max(left+1,a[1]);
                    flag=true;
                }
            }
            if(flag==false) return false;
        }
        return true;
    }
};