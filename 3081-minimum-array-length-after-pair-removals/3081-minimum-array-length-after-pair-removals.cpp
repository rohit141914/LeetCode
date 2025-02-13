class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int l=nums.size();
        int i=0;
        int j=l/2;
        int ans=l;
        while(i<l/2&&j<l){
            if(nums[i]<nums[j]){
                ans--;
                ans--;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};