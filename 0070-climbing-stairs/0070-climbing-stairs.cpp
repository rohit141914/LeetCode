class Solution {
public:
    unordered_map<int,int>temp;
    int climbStairs(int n) {
        if(n<0) return 0;
        if(n==0) return 1;
        int a=0;
        int b=0;
        if(temp.find(n-1)!=temp.end()){
            a=temp[n-1];
        }
        else{
            a=climbStairs(n-1);
            temp[n-1]=a;
        }
        if(temp.find(n-2)!=temp.end()){
            b=temp[n-2];
        }
        else{
            b=climbStairs(n-2);
            temp[n-2]=b;
        }
        return a+b;
    }
};