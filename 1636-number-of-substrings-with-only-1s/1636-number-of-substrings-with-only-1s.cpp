class Solution {
public:
    int numSub(string s) {
        int l=s.length();
        long int c=0;
        long int ans=0;
        for(int i=0;i<l;i++){
            if(s[i]=='1'){
                c++;
            }
            else{
                if(c==0){
                    continue;
                }
                ans+=((c*(c+1))/2)%1000000007;
                c=0;
            }
        }
        if(s[l-1]=='1'){
            ans+=((c*(c+1))/2)%1000000007;
        }
        return ans;
    }
};