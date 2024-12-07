class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        nums.clear();
        for(auto a:mp){
            if(a.second==2){
                nums.push_back(a.first);
            }
        }
        return nums;
    }
};