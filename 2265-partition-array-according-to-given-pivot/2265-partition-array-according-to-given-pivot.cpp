class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>s;
        vector<int>b;
        int c=0;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]==pivot)c++;
            else if(nums[i]<pivot){
                s.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        nums.clear();
        for(auto a:s){
            nums.push_back(a);
        }
        for(int i=0;i<c;i++){
            nums.push_back(pivot);
        }
        for(auto a:b){
            nums.push_back(a);
        }
        return nums;
    }
};