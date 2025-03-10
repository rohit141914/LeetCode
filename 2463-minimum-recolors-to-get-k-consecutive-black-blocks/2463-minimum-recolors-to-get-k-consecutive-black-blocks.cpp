class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int c=0;
        int ans=0;
        int l=blocks.size();
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')c++;
        }
        ans=c;
        for(int i=k;i<l;i++){
            if(blocks[i]=='W')c++;
            if(blocks[i-k]=='W')c--;
            ans=min(c,ans);
        }
        return ans;
    }
};