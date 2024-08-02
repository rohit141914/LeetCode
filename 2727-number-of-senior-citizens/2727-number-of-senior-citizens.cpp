class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto x:details){
            string t="";
            t=t+x[11]+x[12];
            int no=stoi(t);
            if(no>60) ans++;
        }
        return ans;
    }
};