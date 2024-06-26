class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        ans=nums;
        for(auto x:ans) nums.push_back(x);
        ans.clear();
        int ln=nums.size();
        for(int i=0;i<ln/2;i++){
            int a=-1;
            for(int j=i+1;j<ln;j++){
                if(nums[j]>nums[i]){
                    a=nums[j];
                    break;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};