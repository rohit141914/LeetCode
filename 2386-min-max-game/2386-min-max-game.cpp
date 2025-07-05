class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int l=nums.size();

        while(l>1){
            bool fir=true;
            for(int i=0;i<l;i=i+2){
                if(fir){
                    nums[i/2]=min(nums[i],nums[i+1]);
                    fir=false;
                }
                else{
                    nums[i/2]=max(nums[i],nums[i+1]);
                    fir=true;
                }
            }
            l=l/2;
        }
        return nums[0];
    }
};