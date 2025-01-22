class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(i%2==0){
                e.push_back(nums[i]);
            }
            else{
                o.push_back(nums[i]);
            }
        }
        sort(o.begin(),o.end(),greater<>());
        sort(e.begin(),e.end());
        nums.clear();
        // for(auto a:o){
        //     cout<<a<<'-';
        // }
        l=e.size();
        for(int i=0;i<l;i++){
            nums.push_back(e[i]);
            if(i<o.size()){
                nums.push_back(o[i]);
            }
        }
        return nums;
    }
};