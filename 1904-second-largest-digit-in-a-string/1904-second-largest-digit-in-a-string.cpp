class Solution {
public:
    int secondHighest(string s) {
        int a=-1;
        int b=-1;
        set<int>st;
        for(auto x:s){
            if(x-'0'>=0&&x-'0'<=9){
                st.insert(x-'0');
            }
        }
        if(st.size()<2){
            return -1;
        }
        while(st.size()!=2){
            st.erase(st.begin());
        }
        return *st.begin();
    }
};