class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        int r=0;
        while(columnNumber>0){
            columnNumber--;
            r=columnNumber%26;
            ans+='A'+r;
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};