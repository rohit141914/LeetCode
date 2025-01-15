class Solution {
public:
   struct my{
    bool operator()(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first>b.first;
    }
   };
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,my>p;
        for(int i=0;i<k;i++){
            p.push({nums[i],i});
        }
        int l=nums.size();
        pair<int,int>pa;
        for(int i=k;i<l;i++){
            pa=p.top();
            if(pa.first<nums[i]){
                p.pop();
                p.push({nums[i],i});
            }
        }
        vector<int>res(l,INT_MAX);
        while(p.size()!=0){
            pa=p.top();
            p.pop();
            res[pa.second]=pa.first;
        }
        int j=0;
        for(int i=0;i<l;i++){
            if(res[i]!=INT_MAX){
                swap(res[i],res[j]);
                j++;
            }
        }
        res.erase(res.begin()+j,res.end());
        return res;
    }
};