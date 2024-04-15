class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        int ln=nums.size();
        unordered_map<int,int> a;
            
        for(int i=0;i<ln;i++){
            a[nums[i]]++;
        }
        for(auto x:a){
            if(x.second==1){
                ans=ans+x.first;
            }
        }
        return ans;
    }
};