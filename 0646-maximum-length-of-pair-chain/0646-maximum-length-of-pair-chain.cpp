class Solution {
public:
    static bool my(vector<int>a,vector<int>b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),my);
        int l=pairs.size();
        int co=1;
        int p=0;
        for(int i=0;i<l;i++){
            if(pairs[p][1]<pairs[i][0]){
                co++;
                p=i;
            }
        }
        return co;
    }
};