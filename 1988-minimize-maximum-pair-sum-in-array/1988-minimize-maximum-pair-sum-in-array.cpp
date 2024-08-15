class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ln=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<ln/2;i++){
            nums[i]=nums[i]+nums[ln-1-i];
            ans=max(ans,nums[i]);
        }
    return ans;
    }
};