class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            cout<<m<<' ';
            if(m==0||m==e||arr[m]>arr[m-1]&&arr[m]>arr[m+1]){
                if(m==0){
                    if(arr[0]>arr[1]){
                        return 0;
                    }
                    return 1;
                }
                return m;
            }
            else if(arr[m]<arr[m+1]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return -1;
    }
};