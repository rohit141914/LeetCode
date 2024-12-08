class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>st;
        int j=0;
        vector<int>v;
        for(auto a:nums){
            st.insert(a);
        }
        int l=nums.size();
        for(int i=1;i<=l;i++){
            if(st.find(i)==st.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};