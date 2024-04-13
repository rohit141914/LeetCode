class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans=0;
        int ln=height.size();
        int i=0;
        int j=ln-1;
        
        while(i<j){
            int x=min(height[i],height[j]);
            int y=j-i;
            ans=max(ans,x*y);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};