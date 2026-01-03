class Solution {
public:
    int minimumChairs(string s) {
        int c=0;
        int ans=0;
        for(auto a:s){
            if(a=='E'){
                c++;
                ans=max(ans,c);
            }
            else{
                c--;
            }
        }
        return ans;
    }
};