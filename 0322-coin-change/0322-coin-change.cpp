class Solution {
public:
    int coinChange(vector<int>& c, int amount) {
            vector<int>dp(amount+1,INT_MAX);
            dp[0]=0;
            for(int i=1;i<=amount;i++){
                for(int j=0;j<c.size();j++){
                    if(i>=c[j]){
                        int res=dp[i-c[j]];
                        if(res!=INT_MAX){
                            dp[i]=min(dp[i],res+1);
                        }
                    }
                }
            }
    return dp[amount]==INT_MAX?-1:dp[amount];
    }
};