class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a=0;
        for(auto x:nums){
            if(x<10){
                a+=x;
            }
            else{
                a-=x;
            }
        }
        return a!=0;
    }
};