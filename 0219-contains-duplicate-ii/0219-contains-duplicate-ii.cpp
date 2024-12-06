class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,vector<int>>st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])==st.end()){
                vector<int> v={i};
                st[nums[i]]=v;
            }
            else{
                vector<int> v=st[nums[i]];
                for(auto x:v){
                    if(abs(i-x)<=k){
                        return true;
                    }
                }
                v.push_back(i);
                st[nums[i]]=v;
            }
        }
        return false;
    }
};