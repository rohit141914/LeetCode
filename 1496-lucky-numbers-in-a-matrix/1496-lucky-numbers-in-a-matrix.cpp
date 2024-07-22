class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> r;
        vector<int> c;
        vector<int>ans;
        int l=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<l;i++){
            int no=INT_MAX;
            for(int j=0;j<m;j++){
                no=min(no,matrix[i][j]);
            }
            r.push_back(no);
        }
         for(int i=0;i<m;i++){
            int no=INT_MIN;
            for(int j=0;j<l;j++){
                no=max(no,matrix[j][i]);
            }
            c.push_back(no);
         }
        for(int i=0;i<l;i++){
            for(int j=0;j<m;j++){
            if(r[i]==c[j]){
                ans.push_back(r[i]);
            }
            }
        }
        return ans;
    }
};