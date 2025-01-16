class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        int l=nums1.size();
        int l1=nums2.size();
        int c=0;
        for(int i=0;i<l;i++){
            if(l1%2==1){
                ans=ans^nums1[i];
            }
            else {
                break;
            }
        }
        // cout<<l1<<'-';
        for(int i=0;i<l1;i++){
            if(l%2==1){
            // cout<<i<<' ';
                ans=ans^nums2[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};