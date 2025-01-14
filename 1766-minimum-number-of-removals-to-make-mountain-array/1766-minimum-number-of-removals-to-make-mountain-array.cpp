class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
     int l=nums.size();
     vector<int>le(l,1);
     vector<int>ri(l,1);
     for(int i=0;i<l;i++){
        int c=0;
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
                le[i]=max(le[i],le[j]+1);
            }
        }
     }
     reverse(nums.begin(),nums.end());
     for(int i=0;i<l;i++){
        int c=0;
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
                ri[i]=max(ri[i],ri[j]+1);
            }
        }
     }
     reverse(ri.begin(),ri.end());

     int c=INT_MAX;     
    for(int i=0;i<l;i++){
        if(le[i]>1&&ri[i]>1){
        c=min(c,l-le[i]-ri[i]+1);
    }
        }
     return c;
    }
};