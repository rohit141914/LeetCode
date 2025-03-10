class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>v(right+1,1);
        v[0]=0;
        v[1]=0;
        for(int i=2;i*i<=right;i++){
            if(v[i]==1){
                for(int j=i+i;j<=right;j=j+i){
                    v[j]=0;
                }
            }
        }
        vector<int>ans{-1,-1};
        int d=INT_MAX;
        int p=-1;
        for(int i=left;i<=right;i++){
            if(v[i]==1){
                if(p==-1){
                    p=i;
                }
                else if(ans[0]==-1){
                    ans[0]=p;
                    ans[1]=i;
                    p=i;
                    d=ans[1]-ans[0];
                }
                else{
                    if(d>i-p){
                        ans[0]=p;
                        ans[1]=i;
                        d=i-p;
                    }
                        p=i;
                }
            }
        }
        return ans;
    }
};