class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int mi=INT_MAX;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i] < 0 && k>0){
                nums[i] = -nums[i];
                k--;
            }
            sum+=nums[i];
            mi=min(mi,nums[i]);
        }
        if(k>0 && k%2!=0){
            sum-= 2*mi;
        }
        return sum;
    }
};