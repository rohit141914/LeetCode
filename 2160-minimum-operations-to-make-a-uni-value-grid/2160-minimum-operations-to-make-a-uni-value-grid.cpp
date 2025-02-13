class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>arr;
        for(auto a:grid){
            for(auto v:a){
                arr.push_back(v);
            }
        }
        int l=arr.size();
        for(int i=1;i<l;i++){
            if(abs(arr[i]-arr[i-1])%x!=0){
                return -1;
            }
        }
        sort(arr.begin(),arr.end());
        int me=arr[l/2];
        int ans=0;
        for(auto a:arr){
            ans+=abs(a-me);
        }
        return ans/x;
    }
};