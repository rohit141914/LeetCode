class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int l=nums.size();
        int ans=0;
        int mn=INT_MAX;
        for(int i=0;i<l-1;i++){
            if(nums[i]<mn){
            for(int j=i+1;j<l;j++){
                if(nums[i]<=nums[j]){
                    ans=max(ans,j-i);
                }
            }
            mn=nums[i];
            }

        }
        return ans;
    }
};