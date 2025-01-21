class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>c(n,0);
        vector<int>r(m,0);
        for(int i=0;i<m;i++){
            int co=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)co++;
            }
            r[i]=co;
        }
        for(int i=0;i<n;i++){
            int co=0;
            for(int j=0;j<m;j++){
                if(grid[j][i]==1)co++;
            }
            c[i]=co;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=r[i]+c[j]-(n-r[i])-(m-c[j]);
            }
        }
        return grid;
    }
};