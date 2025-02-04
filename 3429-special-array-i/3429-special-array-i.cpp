class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int l=nums.size();
        if(l==1){
            return true;
        }
        for(int i=1;i<l;i++){
            if((nums[i]%2==0&&nums[i-1]%2==0)||(nums[i]%2==1&&nums[i-1]%2==1)){
                return false;
            }
        }
        return true;
    }
};