class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int c=0;
        int l=nums.size();
        for(int i=0;i<l-3;i++){
            for(int j=i+1;j<l-2;j++){
                for(int k=j+1;k<l-1;k++){
                    for(int o=k+1;o<l;o++){
                        if(nums[i]+nums[j]+nums[k]==nums[o]) c++;
                    }
                }
            }
        }
        return c;
    }
};