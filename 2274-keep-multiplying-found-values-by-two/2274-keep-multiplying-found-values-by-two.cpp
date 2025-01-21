class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        unordered_set<int>st;
        for(auto a:nums){
            st.insert(a);
        }
            while(st.find(o)!=st.end()){
                o=o*2;
            }
        
        return o;
    }
};