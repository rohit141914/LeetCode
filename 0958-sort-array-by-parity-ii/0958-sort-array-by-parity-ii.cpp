class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(i%2==0&&nums[i]%2==1){
                e.push_back(i);
            }
            if(i%2==1&&nums[i]%2==0){
                o.push_back(i);
            }
        }
        // for(auto x:o){
        //     cout<<x<<'-';
        // }
        l=e.size();
        for(int i=0;i<l;i++){
            swap(nums[e[i]],nums[o[i]]);
        }
        return nums;
    }
};