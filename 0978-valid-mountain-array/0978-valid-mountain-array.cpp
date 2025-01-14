class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int c=0;
        int l=arr.size();
        if(l<3){
            return false;
        }
        for(int i=1;i<l-1;i++){
            if(arr[i]==arr[i-1]){
                return false;
            }
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                c++;
            }
        }
        if(c==1&&arr[l-1]>arr[l-2]){
                return false;
        }
        if(c==1&&arr[0]>arr[1]){
                return false;
        }

        return c==1;
    }
};