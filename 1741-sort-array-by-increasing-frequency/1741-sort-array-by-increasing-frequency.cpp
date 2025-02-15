class Solution {
public:
    struct my{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            if(a.second!=b.second){
                return a.second>b.second;
            }
            return a.first<b.first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            mp[a]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,my>p;
        for(auto a:mp){
            p.push({a.first,a.second});
        }
        nums.clear();
        pair<int,int>t;
        while(p.empty()==false){
            t=p.top();
            p.pop();
            int l=t.second;
            for(int i=0;i<l;i++){
                nums.push_back(t.first);
            }
        }
        return nums;
    }
};