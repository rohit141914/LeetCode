class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        if(e==0){
            return 0;
        }
        while(s<=e){
            int m=(s+e)/2;
            cout<<m<<' ';
            if(m==0 ||m==e ||(nums[m]>nums[m-1]&&nums[m]>nums[m+1])){
                if(e==1||e==0){
                    if(nums[0]>nums[1]){
                    return 0;
                    }
                return 1;
                }
                return m;
            }
            else if (nums[m]<nums[m+1]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return 0;
    }
};