class Solution {
public:
    int solve(string a,string b){
        int m=a.length();
        int n=b.length();
        vector<vector<int>>res(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1]){
                    res[i][j]=1+res[i-1][j-1];
                }
                else{
                    res[i][j]=max(res[i-1][j],res[i][j-1]);
                }
            }
        }
        return res[m][n];
    }
    int longestPalindromeSubseq(string s) {
        string b=s;
        reverse(b.begin(),b.end());
        return solve(s,b);
    }
};