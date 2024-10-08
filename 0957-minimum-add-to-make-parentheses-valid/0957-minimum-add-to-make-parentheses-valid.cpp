class Solution {
public:
    int minAddToMakeValid(string s) {
        int c1=0;
        int c2=0;
        int ans=0;
        for(auto x:s){
            if(x=='('){
            c1++;
            } 
            else {
            if(c1>0){
                c1--;
            }
            else{
                ans++;
            }
            }
        }
        return ans+c1;
    }
};