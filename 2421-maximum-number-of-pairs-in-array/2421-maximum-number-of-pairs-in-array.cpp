class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            mp[a]++;
        }
        int a=0;
        int b=0;
        for(auto s:mp){
            a+=s.second/2;
            b+=s.second%2;
        }
        nums.clear();
        nums.push_back(a);
        nums.push_back(b);
        return nums;
    }
};