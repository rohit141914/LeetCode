class Solution {
public:
    int solve(string a,string b,int m,int n){
        vector<vector<int>>arr(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            arr[i][0]=i;
        }
        for(int i=1;i<=n;i++){
            arr[0][i]=i;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1]){
                    arr[i][j]=arr[i-1][j-1];
                }
                else{
                    arr[i][j]=1+min(arr[i][j-1],min(arr[i-1][j],arr[i-1][j-1]));
                }
            }
        }
        return arr[m][n];
    }
    int minDistance(string w1, string w2) {
        int m=w1.length();
        int n=w2.length();
        return solve(w1,w2,m,n);
    }
};