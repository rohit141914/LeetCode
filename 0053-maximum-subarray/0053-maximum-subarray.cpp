class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int ln=nums.size();
        int sum=0;
        for(int i=0;i<ln;i++){
            sum=max(sum+nums[i],nums[i]);
            ans=max(ans,sum);
        }
        return ans;
    }
};