class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        int l=nums.size();
        for(int i=1;i<l;i++){
            if(nums[i-1]==key){
                mp[nums[i]]++;
            }
        }
        int c=0;
        int n=0;
        for(auto a:mp){
            c=max(c,a.second);
            if(c==a.second){
                n=a.first;
            }
        }
        return n;
    }
};