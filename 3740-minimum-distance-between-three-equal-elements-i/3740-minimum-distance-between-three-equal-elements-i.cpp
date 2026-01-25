class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int l=nums.size();
        for(int i=0;i<l;i++){
            mp[nums[i]].push_back(i);
        }
        int res=INT_MAX;
        vector<int>t;
        for(auto a:mp){
            if(a.second.size()>=3){
                t=a.second;
                for(int j=0;j<=t.size()-3;j++){
                    res=min(res,abs(t[j]-t[j+1])+abs(t[j+1]-t[j+2])+abs(t[j]-t[j+2]));
                }
            }
        }
        return res != INT_MAX ? res : -1;
    }
};