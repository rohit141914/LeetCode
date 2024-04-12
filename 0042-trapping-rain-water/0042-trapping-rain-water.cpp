class Solution {
public:
    int trap(vector<int>& height) {
        int ln=height.size();
        int ans=0;
        vector<int> lmax(ln,0);
        vector<int> rmax(ln,0);
        int left=height[0];
        for(int i=1;i<ln;i++){
            left=max(left,height[i-1]);
            lmax[i]=left;
        }
        int right=height[ln-1];
        for(int i=ln-2;i>=0;i--){
            right=max(right,height[i+1]);
            rmax[i]=right;
        }
        for(int i=1;i<ln-1;i++){
            int sum=min(lmax[i],rmax[i])-height[i];
            if(sum>0) ans+=sum;
        }
        return ans;
    }
};