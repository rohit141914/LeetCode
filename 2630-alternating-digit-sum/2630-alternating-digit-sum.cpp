class Solution {
public:
    int alternateDigitSum(int n) {
        string a=to_string(n);
        reverse(a.begin(),a.end());
         n=stoi(a);
        bool f=true;
        int ans=0;
        while(n>0){
            if(f==true){
                ans+=n%10;
                n/=10;
                f=false;
            }
            else{
                ans-=n%10;
                n/=10;
                f=true;
            }
        }
        return ans;
    }
};