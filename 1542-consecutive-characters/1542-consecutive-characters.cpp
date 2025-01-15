class Solution {
public:
    int maxPower(string s) {
        int c=1;
        int ans=1;
        int l=s.length();
        for(int i=1;i<l;i++){
            if(s[i]==s[i-1]){
                c++;
                ans=max(c,ans);
            }
            else{
                c=1;
            }
        }
        return ans;
    }
};