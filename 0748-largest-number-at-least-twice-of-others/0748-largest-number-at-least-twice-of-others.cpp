class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ma=INT_MIN;
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if(ma<nums[i]){
                ma=nums[i];
                idx=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i==idx){
                continue;
            }
            if(nums[i]*2>ma){
                // cout<<i;
                return -1;
            }
        }
        return idx;
    }
};