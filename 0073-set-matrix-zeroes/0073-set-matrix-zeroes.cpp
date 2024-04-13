class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> r;
        unordered_set<int> c;
        int ro=matrix.size();
        int co=matrix[0].size();
        for(int i=0;i<ro;i++){
            for(int j=0;j<co;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        
        for(auto x:r){
            for(int i=0;i<co;i++){
                matrix[x][i]=0;
            }
        }
        
        for(auto x:c){
            for(int i=0;i<ro;i++){
                matrix[i][x]=0;
            }
        }
        
    }
};