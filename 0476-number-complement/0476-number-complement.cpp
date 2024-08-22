class Solution {
public:
    int findComplement(int num) {
        string s="";
        while(num>0){
            int n=num%2;
            s=to_string(n)+s;
            num/=2;
        }
        num=0;
        for(int i=s.length()-1;i>=0;i--){
            cout<<s.length();
        if(s[i]=='0'){
                num=num+pow(2,s.length()-i-1);
            }
        }
        return num;
    }
};