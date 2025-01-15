class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int l=nums.size();
        vector<int>len(l,1);
        vector<int>cou(l,1);
        int maxl=0;
        int maxc=0;
        
        for(int i=0;i<l;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(len[j]+1>len[i]){
                        len[i]=len[j]+1;
                        cou[i]=cou[j];
                    }
                    else if(len[j]+1==len[i]){
                        cou[i]+=cou[j];
                    }
                }
            }
            if(maxl<len[i]){
                maxl=len[i];
                maxc=cou[i];
            }
            else if(maxl==len[i]){
                maxc+=cou[i];
            }
        }
        return maxc;
    }
};