class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    vector<int> ans;
        sort(arr.begin(),arr.end());
        int ln=arr.size();
        if(arr[0]==0){
            ans.push_back(0);
        }
        
        for(int i=1;i<24;i++){
            for(int j=0;j<ln;j++){       
            if(__builtin_popcount(arr[j])==i){
                ans.push_back(arr[j]);
            }
        }
        }
        return ans;
    }
};