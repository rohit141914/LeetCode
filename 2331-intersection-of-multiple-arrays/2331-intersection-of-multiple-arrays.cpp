class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
     map<int,int>mp;
     for(auto x:nums)
     for(auto y:x) mp[y]++;
     int ln=nums.size();
     vector<int>ans;
     for(auto x:mp)
     if(x.second==ln){
        ans.push_back(x.first);
     }
     return ans;
    }
};