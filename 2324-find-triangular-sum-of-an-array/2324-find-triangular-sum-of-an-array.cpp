class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1){
            int l=nums.size();
            for(int i=0;i<l-1;i++){
                nums[i]=(nums[i]+nums[i+1])%10;
            }
            nums.pop_back();
        }
        return nums[0];
    }
};