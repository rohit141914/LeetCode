class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
     unordered_map<string,int> mp;
        int ans=0;
        for(string x:words){
            string t=x;
            reverse(t.begin(),t.end());
            if(mp.find(t)==mp.end()){
                mp[x]++;
            }
            else{
                mp[x]==0;
                ans++;
            }
        }
        return ans;
    }
};