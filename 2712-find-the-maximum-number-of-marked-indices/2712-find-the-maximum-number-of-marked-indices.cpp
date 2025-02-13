class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=0;
        int i=0;
        int l=nums.size();
        int j=l/2;
        while(i<l/2&&j<l){
            if(nums[i]*2<=nums[j]){
                ans+=2;
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