class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int l=nums.size();
        int c=0;
        for(int i=0;i<l-1;i++){
            if(nums[i+1]<nums[i]){
                if(c==1){
                    return false;
                }
                if(i==0){
                    c=1;
                    continue;
                }
                if(i==l-2){
                    continue;
                }
                if(nums[i-1]<=nums[i+1]){
                    c++;
                    continue;
                }
                if(i<l-2&&nums[i]<=nums[i+2]){
                    c++;
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};