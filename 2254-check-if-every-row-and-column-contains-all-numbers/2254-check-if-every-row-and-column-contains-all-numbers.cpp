class Solution {
public:
    bool checkValid(vector<vector<int>>& m ) {
        int r=m.size();
        int c=m[0].size();
        int ln=c;
        for(int i=0;i<r;i++){
            vector<int>t(ln+1,0);
            for(int j=0;j<c;j++){
                if(m[i][j]>ln||t[m[i][j]]==1){
                    return false;
                }
                t[m[i][j]]++;
            }
        }
        ln=r;
        for(int i=0;i<c;i++){
            vector<int>t(ln+1,0);
            for(int j=0;j<r;j++){
                if(m[j][i]>ln||t[m[j][i]]==1){
                    return false;
                }
                t[m[j][i]]++;
            }
        }
        return true;
    }
};