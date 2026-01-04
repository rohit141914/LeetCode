class Solution {
public:
    int integerBreak(int n) {
        if(n<=3) return n-1;
        int ans=1;
        while(n>4){
            ans*=3;
            n-=3;
        }
        if(n>0){
            ans=ans*n;
        }
        return ans;
    }
};