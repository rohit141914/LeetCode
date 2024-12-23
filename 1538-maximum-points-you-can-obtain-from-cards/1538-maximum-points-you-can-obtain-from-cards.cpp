class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int t=0;
        int l=cardPoints.size();
        k=l-k;
        for(int i=0;i<l;i++){
            t+=cardPoints[i];
            cardPoints[i]=-cardPoints[i];
        }
        int c=0;
        for(int i=0;i<k;i++){
            c+=cardPoints[i];
        }
        int ans=c;
        for(int i=k;i<l;i++){
            c=c+cardPoints[i]-cardPoints[i-k];
            ans=max(ans,c);
        }
        return t+ans;
    }
};