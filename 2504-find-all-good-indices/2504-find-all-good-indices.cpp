class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int l=nums.size();
        vector<int>de(l,1);
        vector<int>inc(l,1);
        for(int i=1;i<l;i++){
            if(nums[i]<=nums[i-1]){
                de[i]=de[i-1]+1;
            }
        }
        for(int i=l-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                inc[i]=inc[i+1]+1;
            }
        }
        vector<int>ans;
        
        for(int i=k;i<l-k;i++){
            if(de[i-1]>=k&&inc[i+1]>=k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};