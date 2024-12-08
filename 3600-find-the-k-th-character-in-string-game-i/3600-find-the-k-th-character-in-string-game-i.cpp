class Solution {
public:
    char kthCharacter(int k) {
        string a="a";
        while(a.length()<=k){
            int l=a.length();
            for(int i=0;i<l;i++){
                if(a[0]!='z'){
                    a+=a[i]+1;
                }
                else{
                    a+='a';
                }
            }
        }
        for(auto x:a){
            cout<<x<<' ';
        }
        return a[k-1];
    }
};