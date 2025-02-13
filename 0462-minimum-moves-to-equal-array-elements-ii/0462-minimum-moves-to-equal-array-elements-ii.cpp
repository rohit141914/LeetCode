class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size();
        int n=l/2;
        int med=nums[n];
        int ans=0;
        for(auto a:nums){
            ans+=abs(a-med);
        }
        return ans;
    }
};