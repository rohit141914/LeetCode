class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int l=original.size();
        vector<vector<int>> arr;
        if((m*n)!=l){
            return arr;
        }
        int j=0;
        vector<int> t;
        for(int i=0;i<l;i++){
            t.push_back(original[i]);
            j++;
            if(j==n){
                arr.push_back(t);
                t.clear();
                j=0;
            }
        }
        return arr;
    }
};