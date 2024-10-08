class Solution {
public:
    int minSwaps(string s) {
        int c=0;
        int l=s.length();
        int ans=0;
        for(int i=0;i<l;i++){
            if(s[i]=='['){
                c++;
            }
            else{
                if(c==0){
                    ans++;
                }
                else{
                    c--;
                }
            }
        }
        return ans%2==0?ans/2:(ans/2)+1;
    }
};