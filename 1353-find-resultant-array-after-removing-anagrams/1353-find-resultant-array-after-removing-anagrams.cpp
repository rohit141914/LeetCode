class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        string prev="00000000000000000000000000";
        for(auto a:words){
            string t="00000000000000000000000000";
            for(auto f:a){
                t[f-'a']++;
            }
            if(prev==t){
                continue;
            }
            prev=t;
            ans.push_back(a);
        }
        return ans;
    }
};