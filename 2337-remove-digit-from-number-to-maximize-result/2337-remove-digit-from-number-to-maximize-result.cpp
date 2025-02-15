class Solution {
public:
    string removeDigit(string nums, char digit) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==digit && nums[i]<nums[i+1])return nums.erase(i,1);
        }
        return nums.erase(nums.find_last_of(digit),1);
    }
};