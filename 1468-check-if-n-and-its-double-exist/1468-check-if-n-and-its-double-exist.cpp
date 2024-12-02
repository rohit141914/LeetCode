class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>st;
        for(auto s:arr){
            if(st.find(2*s)!=st.end()||(s%2==0 &&st.find(s/2)!=st.end())){
                return true;
            }
            st.insert(s);
        }
        return false;
    }
};