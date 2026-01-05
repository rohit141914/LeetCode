class Solution {
public:
    int minMoves(vector<int>& nums) {
     int max=*max_element(nums.begin(),nums.end());
     int res=0;
     for(auto a:nums){
        res+=abs(a-max);
     }
     return res;
    }
};