class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ln=arr.size();
        for(int i=0;i<ln-2;i++){
            if(arr[i]%2==1&&arr[i+1]%2==1&&arr[i+2]%2==1){
                return 1;
            }
        }
        return 0;
    }
};