class Solution {
public:
    int sol(int n){
        int c=0;
        int sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                c+=2;
                sum+=i;
                sum+=(n/i);
                if(i==(n/i)){
                    c--;
                    sum-=(n/i);
                }
                if(c>4) return 0;
            }
        }
        return c==4 ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int res=0;
        for(auto a:nums){
            res+=sol(a);
        }
        return res;
    }
};