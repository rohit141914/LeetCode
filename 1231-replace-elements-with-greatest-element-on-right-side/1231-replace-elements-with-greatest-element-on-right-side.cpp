class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int ln=arr.size();
       int num=arr[ln-1];
       for(int i=ln-1;i>=0;i--){
        int t=arr[i];
        arr[i]=num;
        if(t>num){
            num=t;
        }
       } 
       arr[ln-1]=-1;
       return arr;
    }
};