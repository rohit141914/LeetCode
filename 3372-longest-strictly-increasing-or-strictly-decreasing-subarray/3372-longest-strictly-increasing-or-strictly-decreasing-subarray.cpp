class Solution {
public:
    int solve(vector<int>a){
        int l=a.size();
        int res=1;
        int c=1;
        for(int i=1;i<l;i++){
            if(a[i]>a[i-1]){
                c++;
                res=max(res,c);
            }
            else{
                c=1;
            }
        }
        return res;
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=solve(nums);
        reverse(nums.begin(),nums.end());
        ans=max(ans,solve(nums));
        return ans;
    }
};