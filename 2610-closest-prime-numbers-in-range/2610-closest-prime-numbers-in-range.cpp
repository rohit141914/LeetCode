class Solution {
public:
    bool isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>arr;
        if(left==1) left++;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                arr.push_back(i);
            }
        }
        if(arr.size()<2){
            arr.clear();
            arr.push_back(-1);
            arr.push_back(-1);
            return arr;
        }
        int d=arr[1]-arr[0];
        int a=arr[0];
        int b=arr[1];
        for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[i-1]<d){
                a=arr[i-1];
                b=arr[i];
                d=b-a;
            }
        }
        arr.clear();
        arr.push_back(a);
        arr.push_back(b);
        return arr;
    }
};