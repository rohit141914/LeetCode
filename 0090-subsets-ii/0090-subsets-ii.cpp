class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>st;
    void sol(vector<int>arr,vector<int>t,int i){
        if(i==arr.size()){
            sort(t.begin(),t.end());
            if(st.find(t)!=st.end()){
                return ;
            }
            ans.push_back(t);
            st.insert(t);
            return ;
        }
        // cout<<i<<"-";
        sol(arr,t,i+1);
        t.push_back(arr[i]);
        sol(arr,t,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>t;
        sol(nums,t,0);
        return ans;
    }
};