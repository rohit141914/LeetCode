class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        for(vector<int> a:nums1){
            mp[a[0]]+=a[1];
        }

        for(vector<int> a:nums2){
            mp[a[0]]+=a[1];
        }
        vector<vector<int>>ans;
        for(auto a:mp){
            vector<int>t;
            t.push_back(a.first);
            t.push_back(a.second);
            ans.push_back(t);
        }
        return ans;
    }
};