class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int ln=index.size();
        for(int i=0;i<ln;i++){
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};