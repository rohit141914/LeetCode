class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a=coordinate1[0]-'0';
        int b=coordinate1[1]-'0';
        int m=coordinate2[0]-'0';
        int n=coordinate2[1]-'0';
        if((a+b)%2==0 && (m+n)%2==0 ) return true;
        if((a+b)%2==1 && (m+n)%2==1 ) return true;
        return false;
    }
};