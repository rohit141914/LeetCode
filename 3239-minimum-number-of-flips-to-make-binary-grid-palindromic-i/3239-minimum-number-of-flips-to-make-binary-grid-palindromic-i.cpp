class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        
        int res=0;
        int r=grid.size();
        int c=grid[0].size();
        int res1=0;
        for(auto &a:grid){
            for(int i=0;i<c/2;i++){
                if(a[i]!=a[c-1-i]){
                    res1++;
                }
            }
        }
        int res2=0;
        for(int i=0;i<c;i++){
            for(int j=0;j<r/2;j++){
                if(grid[j][i]!=grid[r-1-j][i]){
                    res2++;
                }
            }
        }
        return min(res1,res2);
    }
};