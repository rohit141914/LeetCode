class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=0;
        for(auto x:nums){
            s+=x;
        }
        int l=nums.size();
        int c=0;
        for(int i=0;i<l;i++){
            s-=nums[i];
            if(c==s){
                return i;
            }
            c+=nums[i];
        }
        return -1;
    }
};