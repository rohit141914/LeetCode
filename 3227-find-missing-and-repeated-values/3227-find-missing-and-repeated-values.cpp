class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int l=grid.size();
        l=l*l;
        unordered_map<int,int>st;
        vector<int>ans{-1,-1};
        for(vector<int>a:grid){
            for(auto aa:a){
                st[aa]++;
            }
        }
        for(int i=1;i<=l;i++){
            if(st[i]==0){
                ans[1]=i;
            }
            if(st[i]==2){
                ans[0]=i;
            }
        }
        return ans;
    }
};