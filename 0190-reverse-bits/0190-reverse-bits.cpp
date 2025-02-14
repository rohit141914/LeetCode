class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string t="";
        for(int i=0;i<32;i++){
            if(n%2==1){
                t+='1';
            }
            else{
                t+='0';
            }
            n=n/2;
        }
        long ans=0;
        for(int i=0;i<32;i++){
            if(t[32-i]=='1'){
                ans+=pow(2,i-1);
            }
        }
        if(t[0]=='1'){
            ans+=pow(2,31);
        }
        return ans;
    }
};