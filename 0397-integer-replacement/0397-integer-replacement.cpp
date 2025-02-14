class Solution {
public:
    int integerReplacement(long n) {
        int c=0;
        while(n>0){
            if(n==3){
                return c+2; 
            }
            if(n%2==0){
                n=n/2;
            }
            else{
                if((n+1)%4==0){
                    n++;
                }
                else{
                    n--;
                }
            }
            c++;
        }
        return c-1;
    }
};