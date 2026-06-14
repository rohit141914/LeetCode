class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            mp[n%10]++;
            n=n/10;
        }
        int res=0;
        for(auto a:mp){
            res+=a.first*a.second;
        }
        return res;
    }
};