class Solution {
public:
    int countHomogenous(string s) {
        int l=s.length();
        unsigned long long c=1;
        unsigned long long ans=0;
        for(int i=1;i<l;i++){
            cout<<c<<' ';
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                ans+=((c*(c+1))/2)%1000000007;
                c=1;
            }
        }
        if(s[l-1]==s[l-1]){
            ans+=((c*(c+1))/2)%1000000007;
        }
        else{
            ans++;
        }
        return ans;
    }
};