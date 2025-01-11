class Solution {
public:
    int ceil(vector<int>arr,int k){
        int s=0;
        int e=arr.size()-1;
        int ans=0;
        while(s<=e){
            int m=(s+e)/2;
            if(arr[m]>=k){
                e=m-1;
            }
            else{
                s=m+1;
                ans=s;
            }
        }
        return ans;
    }
    bool increasingTriplet(vector<int>& nums) {
        int l=nums.size();
        vector<int>arr;
        arr.push_back(nums[0]);
        int si=1;
        for(int i=1;i<l;i++){
            if(nums[i]>arr[si-1]){
                arr.push_back(nums[i]);
                si++;
                if(si==3){
                    return true;
                }
            }
            else{
            int idx=ceil(arr,nums[i]);
            arr[idx]=nums[i];
            }
        }
        return false;
    }
};