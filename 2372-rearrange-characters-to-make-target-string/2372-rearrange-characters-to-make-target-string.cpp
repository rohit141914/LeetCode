class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>t;
        unordered_map<char,int>arr;
        for(auto a:target){
            t[a]++;
        }
        for(auto a:s){
            arr[a]++;
        }
        int ans=INT_MAX;
        for(auto a:t){
            ans=min(ans,(arr[a.first]/a.second));
        }
        return ans;
    }
};