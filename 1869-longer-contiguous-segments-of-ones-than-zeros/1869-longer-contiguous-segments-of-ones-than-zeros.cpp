class Solution {
public:
    bool checkZeroOnes(string s) {
        int one_c=0;
        int one_m=0;
        int z_c=0;
        int z_m=0;
        int l=s.length();
        if(l==0) return false;
        if(s[0]=='1'){
            one_c++;
            one_m++;
        }
        if(s[0]=='0'){
            z_c++;
            z_m++;
        }

        for(int i=1;i<l;i++){
            if(s[i]==s[i-1]){
                if(s[i]=='1'){
                    one_c++;
                    one_m=max(one_m,one_c);
                }
                else{
                    z_c++;
                    z_m=max(z_m,z_c);
                }
            }
            else{
                if(s[i]=='1'){
                    one_c=1;
                    z_c=0;
                    one_m=max(one_m,one_c);
                }
                if(s[i]=='0'){
                    z_c=1;
                    one_c=0;
                    z_m=max(z_m,z_c);
                }
            }
        }
        return one_m>z_m;
    }
};