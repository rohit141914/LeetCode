class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long int ans=-1;
        int l=nums.size();
        long long c=0;
        for(int i=0;i<l-2;i++){
            for(int j=i+1;j<l-1;j++){
                for(int k=j+1;k<l;k++){
                    c=nums[i]-nums[j];
                    c=c*nums[k];
                    if(ans<c){
                        ans=c;
                    }
                }
            }
        }
        return ans==-1?0:ans;
    }
};