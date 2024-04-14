class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        int ln=indices.size();
        
        // unordered_map<int,int> mp;
        for(int i=0;i<ln;i++){
            int x=indices[i][0];
            
            for(int j=0;j<n;j++){
                ans[x][j]++;
            }
            int y=indices[i][1];
            for(int j=0;j<m;j++){
                ans[j][y]++;
            }
        }
        
        
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((ans[i][j])%2==1) res++;
            }
        }
        return res;
    }
};