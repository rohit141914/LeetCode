class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ln=arr.size();
        int ans=0;
        for(int i=0;i<ln-2;i++){
            for(int j=i+1;j<ln-1;j++){
                // if(){
                for(int k=j+1;k<ln;k++){
                  if(abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c&&abs(arr[i]-arr[j])<=a){
                      ans++;
                  }  
                // }
                }
            }
        }
        return ans;
    }
};