class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int l=nums.size();
        if(l<2){
            return -1;
        }
        nums.push_back(nums[0]);
        int ans=max(abs(nums[0]-nums[1]),abs(nums[0]-nums[l-1]));
        for(int i=1;i<l;i++){
            ans=max(ans,max(abs(nums[i]-nums[i-1]),nums[i]-nums[i+1]));
        }
        return ans;
    }
};