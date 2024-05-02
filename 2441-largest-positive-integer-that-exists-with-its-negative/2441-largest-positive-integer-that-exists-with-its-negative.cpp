class Solution {
public:
    int findMaxK(vector<int>& nums) {
  
        set<int> u;
        int ln=nums.size();
        int ans=-1;
        for(int i=0;i<ln;i++){
            u.insert(nums[i]);
            if(u.find(-nums[i])!=u.end()){
                if(abs(nums[i])>ans){
                    ans=abs(nums[i]);
                }
            }
        }
        return ans;
    }
};