class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ln=nums.size();
        int count=1;
        for(int i=0;i<ln;i=i+2){
            if(nums[i]!=nums[i+1]){
                return false;
            }
        }
        return true;
    }
};