class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int ln=nums.size();
        int ans=0;
        for(int i=0;i<ln;i++){
            if(ln%(i+1)==0){
                
                ans=ans+(nums[i]*nums[i]);
            }
        }
        return ans;
    }
};