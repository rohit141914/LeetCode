class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int num = 0;
        vector<bool> res;
        for (int i = 0; i < nums.size(); ++i) {
            num = (num * 2 + nums[i]) % 5;  
            if (num == 0) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        
        return res;
    }
};
