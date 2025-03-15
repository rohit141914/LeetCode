class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int>m;
        for(auto a:word){
            m[a]++;
        }
        for(auto a:m){
            m[a.first]--;
            unordered_set<int>st;
            for(auto f:m){
                if(f.second>0){
                    st.insert(f.second);
                }
            }
            if(st.size()==1){
                return 1;
            }
            m[a.first]++;
        }
        return 0;

    }
};