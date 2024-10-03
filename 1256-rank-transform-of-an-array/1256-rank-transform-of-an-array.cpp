class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> st;
        for(auto x: arr){
        st[x]=1;
        }
        int c=1;
        for(auto& x:st){
        x.second=c;
        c++;
        }
        for(int i=0;i<arr.size();i++){
            int p=st[arr[i]];
            arr[i]=p;
        }
        return arr ;
    }
};