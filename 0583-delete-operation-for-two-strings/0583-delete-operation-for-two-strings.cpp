class Solution {
public:
    int minDistance(string w1, string w2) {
        int m=w1.length();
        int n=w2.length();
        vector<vector<int>>memo(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(w1[i-1]==w2[j-1]){
                    memo[i][j]=1+memo[i-1][j-1];
                }
                else{
                    memo[i][j]=max(memo[i-1][j],memo[i][j-1]);
                }
            }
        }
        int ans=m+n;
        ans-=2*memo[m][n];
        return ans;
    }
};