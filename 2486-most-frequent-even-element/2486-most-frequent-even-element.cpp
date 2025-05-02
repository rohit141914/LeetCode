class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            if(a%2==0){
                mp[a]++;
            }
        }
        int ans=-1;
        int c=0;
        for(auto a:mp){
            if(ans==-1){
                ans=a.first;
                c=a.second;
            }
            else if(c>a.second){
                continue;
            }
            else{
                if(c==a.second&&ans>a.first){
                    ans=a.first;
                }
                if(c<a.second){
                    ans=a.first;
                    c=a.second;
                }
            }
        }
        return ans;
    }
};