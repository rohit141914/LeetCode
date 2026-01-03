class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(),columnTitle.end());
        long long res=0;
        int l=columnTitle.length();
        long long p=1;
        for(int i=0;i<l;i++){
            int a=columnTitle[i]-'@';
            res+=(p*a);
            p*=26;
        }

        return res;
    }
};