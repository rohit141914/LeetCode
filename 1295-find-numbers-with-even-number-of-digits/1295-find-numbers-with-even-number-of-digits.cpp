class Solution {
public:
    int findNumbers(vector<int>& nums) {
     
        int ln=nums.size();
        int ans=0;
        for(int i=0;i<ln;i++){
            int c=0;
            int t=nums[i];
            while(t){
                c++;
                t=t/10;
            }
            if(c%2==0) ans++;
        }
        return ans;
    }
};