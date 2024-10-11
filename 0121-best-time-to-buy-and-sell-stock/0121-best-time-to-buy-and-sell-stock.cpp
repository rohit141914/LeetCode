class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size();
        vector<int>mi(l,0);
        vector<int>ma(l,0);
        
        int mii=INT_MAX;
        int mxx=INT_MIN;
        for(int i=0;i<l;i++){
            mii=min(mii,prices[i]);
            mxx=max(mxx,prices[l-1-i]);
            mi[i]=mii;
            ma[l-1-i]=mxx;
        }
        int ans=0;
        for(int i=0;i<l;i++){
            ans=max(ans,ma[i]-mi[i]);
        }
        return ans;
    }
};