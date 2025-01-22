class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int j=0;
        for(int i=0;i<l;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};