class Solution {
public:
    vector<int> getRow(int r) {
        vector<int>ans;
        ans.push_back(1);
        if(r==0){
            return ans;
        }
        ans.push_back(1);
        if(r==1) return ans;

        int j=2;
        while(j<=r){
            int p=ans[0];
            int t=ans[0];
            for(int i=1;i<ans.size();i++){
                t=ans[i];
                ans[i]+=p;
                p=t;
            }
            ans.push_back(1);
            j++;
        }
        return ans;
    }
};