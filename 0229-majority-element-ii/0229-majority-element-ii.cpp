class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a=0;
        int b=0;
        int c1=0;
        int c2=0;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]==nums[a]){
                c1++;
            }
            else if(nums[i]==nums[b]){
                c2++;
            }
            else if(c1==0){
                c1=1;
                a=i;
            }
            else if(c2==0){
                c2=1;
                b=i;
            }
            else{
                c1--;
                c2--;
            }

        }
        // cout<<a<<"-"<<b;
        vector<int>ans;
        c1=0;
        c2=0;
        for(int i=0;i<l;i++){
            if(nums[i]==nums[a])c1++;
            else if(nums[i]==nums[b])c2++;
        }
        if(c1>(l/3))ans.push_back(nums[a]);
        if(c2>(l/3))ans.push_back(nums[b]);
        return ans;
    }
};