class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l=nums.size();
        int co=1;
        int res=1;
        for(int i=1;i<l;i++){
            if(nums[i]>nums[i-1]){
                co++;
                res=max(co,res);
            }
            else{
                co=1;
            }
        }
        return res;
    }
};