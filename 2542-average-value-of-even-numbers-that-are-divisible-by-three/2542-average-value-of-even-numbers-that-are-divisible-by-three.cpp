class Solution {
public:
    int averageValue(vector<int>& nums) {
       int ans=0;
       int c=0;
       for(auto a:nums){
        if(a%6==0){
            ans+=a;
            c++;
        }
       } 
       if(ans==0){
        return 0;
       }
       return ans/c;
    }
};