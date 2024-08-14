class Solution {
public:
    int countt(string s){
        int c=0;
        for(auto x: s){
            if(x=='1') c++;
        }
        return c;
    }
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int pe=0;
        for(auto x: bank){
            int curr=countt(x);
            if(curr==0) continue;
            ans=ans+(curr*pe);
            pe=curr;
        }
        return ans;
    }
};