class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        long long l=words.size();
        vector<long long>ans(l,0);
        unordered_set<char>st={'a','e','i','o','u'};
        for(int i=0;i<l;i++){
                string t=words[i];
                if(t.length()==0){
                    continue;
                }
            if(t.length()==1){
                if(st.find(t[0])!=st.end()){
                    i==0?ans[i]=1:ans[i]=ans[i-1]+1;
                }
                else{
                    i==0?ans[i]=0:ans[i]=ans[i-1];
                }
            }
            else{
                if((st.find(t[0])!=st.end())&&(st.find(t[t.length()-1])!=st.end())){
                        i==0?ans[i]=1:ans[i]=ans[i-1]+1;
                    }
                else{
                        // cout<<i<<" ";
                    if(i==0){
                        ans[i]=0;
                    }
                    else{
                        ans[i]=ans[i-1];
                }
                }
        }
        }
        // for(auto x:ans){
        //     cout<<x<<" ";
        // }
        vector<int>res;
        for(auto x:queries){
        if(x[0]==0||ans[x[0]]==0){
            res.push_back(ans[x[1]]);
        }
        else{
            res.push_back(ans[x[1]]-ans[x[0]-1]>0?ans[x[1]]-ans[x[0]-1]:0);
        }
            
        }
        return res;
    }
};