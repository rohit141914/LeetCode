class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mp;
        int l=s.length();
        for(int i=0;i<l;i++){
            mp[s[i]]=i;
        }
        int ans=0;
        l=t.length();
        for(int i=0;i<l;i++){
            ans+=abs(i-mp[t[i]]);
        }
        return ans;
    }
};