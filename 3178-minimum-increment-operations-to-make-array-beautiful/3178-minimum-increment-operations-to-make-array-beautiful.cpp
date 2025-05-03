class Solution {
public:
    long long minIncrementOperations(vector<int>& nums, int k) {
        long long l=nums.size();
        vector<long long>dp(l,0);
        dp[0]=max(0,k-nums[0]);
        dp[1]=max(0,k-nums[1]);
        dp[2]=max(0,k-nums[2]);
        for(int i=3;i<l;i++){
            dp[i]=max(0,k-nums[i])+min(dp[i-1],min(dp[i-2],dp[i-3]));
        }
        return min(dp[l-1],min(dp[l-2],dp[l-3]));
    }
};