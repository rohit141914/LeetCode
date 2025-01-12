class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        bool flag=true;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(flag==true){
                        ans.push_back(grid[i][j]);
                    }
                    flag=!flag;
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    if(flag==true){
                        ans.push_back(grid[i][j]);
                    }
                    flag=!flag;
                }
            }
        }
        return ans;
    }
};