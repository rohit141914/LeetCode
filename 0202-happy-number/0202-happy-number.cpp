class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(st.find(n)==st.end()){
            int a=0;
            st.insert(n);
            while(n>0){
                a+=(n%10)*(n%10);
                n/=10;
            }
            n=a;
        }
        return n==1;
    }
};