class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int ln=nums.size();
        int ans=0;
        for(int i=0;i<ln;i++){
            if(nums[i]==1){
                c++;
                ans=max(ans,c);
            }
            else{
                c=0;
            }
        }
    return ans;      
    }
};