class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans;
        int m=mat.size();
        int n=mat[0].size();
        if(m*n != r*c){
            return mat;
        }
        int a=0;
        int b=0;
        for(int i=0;i<r;i++){
            vector<int>t;
            for(int j=0;j<c;j++){
                t.push_back(mat[a][b]);
                b++;
                if(b==n){
                    a++;
                    b=0;
                }
            }
            ans.push_back(t);
            t.clear();
        }
        return ans;
    }
};