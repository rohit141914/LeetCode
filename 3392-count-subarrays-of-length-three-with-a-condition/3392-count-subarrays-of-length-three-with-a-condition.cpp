class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        
        int l=nums.size();
        int res=0;
        for(int i=0;i<l-2;i++){
            if((nums[i]+nums[i+2])*2==(nums[i+1])) res++;
        }
        return res;
    }
};