class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans=INT_MAX;
        int l=nums.size();
        for(int i=0;i<l-2;i++){
            for(int j=i+1;j<l-1;j++){
                for(int k=j+1;k<l;k++){
                    if(nums[i]<nums[j]&&nums[k]<nums[j]){
                        ans=min(ans,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};