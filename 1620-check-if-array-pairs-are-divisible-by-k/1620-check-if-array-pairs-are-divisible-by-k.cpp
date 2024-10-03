class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>t;
        int c=0;
        for(auto f:arr){
            int r=((f%k)+k)%k;
            t[r]++;
        }
        if(t[0]%2!=0){
            return false;
        }
        for(auto x:t){
            if(x.second==0|| x.first==0){
                continue;
            }
            int f=x.second;
            t[k-x.first]-=f;
            if(t[k-x.first]<0){
                return false;
            }

        }
        return true;
    }
};