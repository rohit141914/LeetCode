class Solution {
public:

    int sol(vector<int>v,int n,int sum){
        vector<vector<long long>>memo(sum+1,vector<long long>(n+1,0));
        for(int i=0;i<n+1;i++){
            memo[0][i]=1;
        }
        for(long long i=1;i<=sum;i++){
            for(long long j=1;j<=n;j++){
                unsigned long long r=memo[i][j-1];
                if(i>=v[j-1]){
                    r+=memo[i-v[j-1]][j];
                }
                memo[i][j]=r;
            }
        }
        return memo[sum][n];
    }
    int change(int amount, vector<int>& coins) {
        int n=sol(coins,coins.size(),amount);
        return n;
    }
};