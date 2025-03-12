class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int total=nums.size();
        int ne=0;
        int z=0;

        for(int i=0;i<total;i++){
            if(nums[i]<0) ne++;
            else if(nums[i]==0) z++;
            else{
                break;
            }
        }
        return max(ne,total-ne-z);
    }
};