class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l=nums.size();
        vector<int>arr(l,INT_MAX);
        arr[0]=0;
        for(int i=1;i<l;i++){
            for(int j=0;j<i;j++){
                if(nums[j]+j>=i){
                    if(arr[j]!=INT_MAX){
                        arr[i]=min(arr[i],arr[j]+1);
                    }
                }
            }
        }
        return arr[l-1]==INT_MAX?false:true;
    }
};