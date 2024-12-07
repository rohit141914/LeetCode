class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        unordered_set<int>st;
        bool ze=false;
        for(auto x:nums){
            if(x==0){
                ze=true;
            }
            st.insert(x);
        }
        return ze==true?st.size()-1:st.size();
    }
}; 