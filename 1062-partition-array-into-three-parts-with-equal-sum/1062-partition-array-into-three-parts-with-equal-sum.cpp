class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long su=0;
        for(auto a:arr){
            su+=a;
        }
        if(su%3!=0){
            return false;
        }
        int tr=su/3;
        int ans=0;
        su=0;
        for(int i=0;i<arr.size();i++){
            su+=arr[i];
            if(su==tr){
                ans++;
                su=0;
            }
            if(ans==3){
                return true;
            }
        }
        return false;
    }
};