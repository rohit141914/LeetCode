class Solution {
public:
// static bool mycheck()
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int l=capacity.size();
        vector<int>temp(l,0);
        for(int i=0;i<l;i++){
            temp[i]=capacity[i]-rocks[i];
        }
        sort(temp.begin(),temp.end());
        int ans=0;
        int i=0;
        for(auto a:temp){
            if(a==0)ans++;
            else if(temp[i]<=additionalRocks){
                ans++;
                additionalRocks-=temp[i];
            }
            i++;
        }
        return ans;
    }
};