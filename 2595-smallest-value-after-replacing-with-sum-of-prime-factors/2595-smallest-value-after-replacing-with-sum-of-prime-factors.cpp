class Solution {
public:

    bool isPrime(int n){
        if(n==2||n==3){
            return 1;
        }
        if(n%2==0||n%3==0){
            return 0;
        }
        for(int i=5;i*i<=n;i++){
            if(n%i==0||n%(i+2)==0){
                return 0;
            }
        }
        return 1;
        }

    int divisorSum(int n){
        int sum=0;
        while(n%2==0){
            sum+=2;
            n/=2;
        }
        int i=3;
        while(n>1){
            while(n%i==0){
                sum+=i;
                n/=i;
            }
            i=i+2;
        }
        return sum;
    }        
    int smallestValue(int n) {
        if(n==4){
            return 4;
        }
        if(isPrime(n)){
            return n;
        }
        while(isPrime(n)!=1){
            int a=divisorSum(n);
            n=a;
        }
        return n;
    }
};