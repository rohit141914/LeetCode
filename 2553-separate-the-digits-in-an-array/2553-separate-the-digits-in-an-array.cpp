class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans;
        int ln=nums.size();
        for(int i=ln-1;i>=0;i--){
            int t=nums[i];
            while(t){
                ans.insert(ans.begin(),t%10);
                t/=10;
            }
        }
        return ans;
    }
};