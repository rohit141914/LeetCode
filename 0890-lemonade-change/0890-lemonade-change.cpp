class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>mp;
        for(auto x:bills){
            if(x==5){
                mp[5]++;
            }
            else if(x==10){
                if(mp[5]<1){
                    return false;
                }
                else{
                    mp[5]--;
                    mp[10]++;
                }
            }
            else{
                if(mp[10]>0){
                    mp[10]--;
                    mp[5]--;
                    if(mp[5]<0){
                        return false;
                    }
                }
                else{
                    mp[5]=mp[5]-3;
                    if(mp[5]<0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};