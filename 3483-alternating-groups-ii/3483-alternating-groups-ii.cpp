class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c, int k) {
        vector<int>a;
        a.insert(a.begin(),c.begin(),c.end());
        a.insert(a.end(),c.begin(),c.end());
        int co=1;
        int ans=0;
        for(int i=1;i<(a.size()/2)+k-1;i++){
            if(a[i]==a[i-1]){
                co=1;
                continue;
            }
            co++;
            if(co>=k)ans++;
        }

        return ans;
    }
};