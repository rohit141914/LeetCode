class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int,int>st;
        int n=0;
        for(auto a:dominoes){
            n=0;
            if(a[0]<a[1]){
                n+=(a[0]*10)+a[1];
            }
            else{
                n+=(a[1]*10)+a[0];
            }
            st[n]++;
        }
        int ans=0;
        for (auto a : st) {
            if (a.second > 1) {
                ans += (a.second * (a.second - 1)) / 2;
            }
        }

        return ans;
    }
};