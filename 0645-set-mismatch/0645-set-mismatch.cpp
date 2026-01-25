class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>st;
        int l=nums.size();
        vector<int>res;
        for(auto a:nums){
            if(st.find(a)!=st.end()){
                res.push_back(a);
            }
            st.insert(a);
        }
        for(int i=1;i<=l;i++){
            if(st.find(i)==st.end()){
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};