class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        
        int dec=0;
        int ans=0;
        int ln=b.size();
        for(int i=0;i<ln;i++){
            b[i]=b[i]-dec;
            if(b[i]>0) {
                ans++;
                dec++;
            };
        }
        return ans;
    }
};