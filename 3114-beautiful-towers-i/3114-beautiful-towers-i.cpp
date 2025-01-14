class Solution {
public:
    long long maximumSumOfHeights(vector<int>& h) {
        int l=h.size();
        long long ans=INT_MIN;
        int curr=0;
        long long cou=0;
        for(int i=0;i<l;i++){
            curr=h[i];
            cou=0;
            for(int j=i-1;j>=0;j--){
                curr=min(h[j],curr);
                cou+=curr;
            }
            curr=h[i];
            for(int j=i+1;j<l;j++){
                curr=min(h[j],curr);
                cou+=curr;
            }
            cou+=h[i];
            ans=max(ans,cou);
        }
        return ans;
    }
};