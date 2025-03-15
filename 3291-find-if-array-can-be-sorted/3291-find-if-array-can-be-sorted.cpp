class Solution {
public:
    bool canSortArray(vector<int>& nums) {

        int cs=nums[0];
        int cl=nums[0];
        int l=nums.size();
        int c=__builtin_popcount(nums[0]);
        int prel=-1;
        for(int i=0;i<l;i++){
            // cout<<__builtin_popcount(nums[i])<<" ";
            if(c==__builtin_popcount(nums[i])){
                cl=max(cl,nums[i]);
                cs=min(cs,nums[i]);
            }
            else{
                c=__builtin_popcount(nums[i]);
                if(prel==-1){
                prel=cl;
                cl=nums[i];
                cs=nums[i];
                continue;
                }
                if(prel>cs){
                    return 0;
                }
                prel=cl;
                cl=nums[i];
                cs=nums[i];
            }
        }
        if(prel>cs){
            return 0;
        }
        return 1;
    }
};