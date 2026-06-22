class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        stack<pair<int,int>>st;
        int l=t.size();
        vector<int>ans(l,0);
        if(l==1){
            ans.push_back(0);
            return ans;
        }
        pair<int,int>p;
        p={t[l-1],l-1};
        st.push(p);
        for(int i=l-2;i>=0;i--){
            p=st.top();
            while(st.empty()==false&&p.first<=t[i]){
                st.pop();
                if(st.empty()==false){
                    p=st.top();
                }
            }
            if(st.empty()==true){
                st.push({t[i],i});
                ans[i]=0;
            }
            else{
                ans[i]=p.second-i;
                st.push({t[i],i});
            }
        }
        return ans;
    }
};