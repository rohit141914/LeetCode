class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(auto x:nums1){
            mp[x]++;
        }
        nums1.clear();
        for(auto x:nums2){
            if(mp[x]!=0){
                nums1.push_back(x);
                mp[x]--;
            }
        }
        return nums1;
    }
};