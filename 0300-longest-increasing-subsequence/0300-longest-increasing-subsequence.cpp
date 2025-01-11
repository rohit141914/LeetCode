class Solution {
public:
    int ceil(vector<int>ans,int x){
        int s=0;
        int e=ans.size()-1;
        int res=0;
        while(s<=e){
            int m=(s+e)/2;
            if(ans[m]<x){
                s=m+1;
            }
            else{
                res=m;
                e=m-1;
            }
        }
        return res;
    }
    int lengthOfLIS(vector<int>& nums) {
    int l=nums.size();
    vector<int>ans;
    ans.push_back(nums[0]);
    int si=1;

    for(int i=1;i<l;i++){
        if(nums[i]>ans[si-1]){
            ans.push_back(nums[i]);
            si++;
        }
        else{
            int idx=ceil(ans,nums[i]);
            ans[idx]=nums[i];
        }
    }
    return si;
    }
};