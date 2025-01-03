class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long s=0;
        for(auto a:nums){
            s+=a;
        }
        long long c=0;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            c+=nums[i];
            s-=nums[i];
            if(c>=s){
                ans++;
            }
        }
        return ans;
    }
};