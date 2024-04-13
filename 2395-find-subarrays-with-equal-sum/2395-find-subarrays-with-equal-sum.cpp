class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> s;
        
        int ln=nums.size();
        for(int i=1;i<ln;i++){
            
                if(s.find(nums[i]+nums[i-1])!=s.end()){
                    return true;
                }
                s.insert(nums[i]+nums[i-1]);
            }
        
        return false;
    }
};