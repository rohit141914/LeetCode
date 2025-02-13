class Solution {
public:
    int sum(int n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n=n/10;
        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        vector<int>q;
        for(auto a:nums){
            int s=sum(a);
            mp[s].push_back(a);
        }
        int ans=0;
        for(auto x:mp){
            q=x.second;
            int l=q.size();
            if(l<2)continue;
            int a=min(q[0],q[1]);
            int b=max(q[0],q[1]);
            for(int i=2;i<l;i++){
                if(q[i]>=b){
                    a=b;
                    b=q[i];
                    continue;
                }
                if(q[i]>a){
                    a=q[i];
                }
            }
            ans=max(ans,a+b);
        }
        if(ans==0){
            return -1;
        }
        return ans;
    }
};