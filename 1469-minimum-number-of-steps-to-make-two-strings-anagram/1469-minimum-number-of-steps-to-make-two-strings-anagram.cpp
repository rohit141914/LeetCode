class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(26,0);
        for(auto x:s){
            v[x-'a']++;
        }
        for(auto x:t){
            v[x-'a']--;
        }
        int c=0;
        for(auto x:v){
            if(x>0){
                c+=x;
            }
        }
        return c;
    }
};