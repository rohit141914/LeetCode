class Solution {
public:
    int minInsertions(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        int l=s.length();
        vector<vector<int>>ar(l+1,vector<int>(l+1,0));
        for(int i=1;i<=l;i++){
            for(int j=1;j<=l;j++){
                if(s[i-1]==rev[j-1]){
                    ar[i][j]=1+ar[i-1][j-1];
                }
                else{
                    ar[i][j]=max(ar[i-1][j],ar[i][j-1]);
                }
            }
        }

        return l-ar[l][l];
    }
};