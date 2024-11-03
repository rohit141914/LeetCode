class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int>st;
        vector<int>res;
        for(int i=0;i<chars.length();i++){
            st[chars[i]]=vals[i];
        }
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])!=st.end()){
                res.push_back(st[s[i]]);
            }
            else{
                int t=s[i]-'a'+1;
                res.push_back(t);
            }
        }
        int ans=0;
        int c=0;

        for(auto x:res){
            ans=max(x,ans+x);
            c=max(ans,c);
        }
        return c;
    }
};