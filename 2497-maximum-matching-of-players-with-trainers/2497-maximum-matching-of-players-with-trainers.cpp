class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        multiset<int>st;
        for(auto s:trainers){
            st.insert(s);
        }
        int c=0;
        for(auto a:players){
            auto n=st.lower_bound(a);
            if(n!=st.end()){
                c++;
                st.erase(n);
            }
        }
        return c;
    }
};