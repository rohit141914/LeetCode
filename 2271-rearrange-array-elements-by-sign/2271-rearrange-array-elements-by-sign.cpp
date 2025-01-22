class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
        }
        l=p.size();
        // for(int i=0;i<l;i++){
        //     cout<<nums[p[i]]<<' '<<nums[n[i]]<<"+++";
        // }
        nums.clear();
        for(int i=0;i<l;i++){
            // swap(nums[p[i]],nums[n[i]]);
            nums.push_back(p[i]);
            nums.push_back(n[i]);
        }
        return nums;
    }
};