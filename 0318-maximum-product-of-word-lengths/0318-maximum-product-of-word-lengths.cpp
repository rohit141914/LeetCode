class Solution {
public:
    int maxProduct(vector<string>& w) {
        int l=w.size();
        int ans=0;
        for(int i=0;i<l-1;i++){
            unordered_set<char>st(w[i].begin(),w[i].end());
            for(int j=i+1;j<l;j++){
                bool flag=false;
                for(int k=0;k<w[j].size();k++){
                    if(st.find(w[j][k])!=st.end()){
                        flag=true;
                        break;
                    }
                }
                if(flag==false){
                    // cout<<i<<" "<<j<<" ";
                    int l1=w[i].length();
                    int l2=w[j].length();
                    // cout<<l1*l2<<"-";
                    ans=max(ans,l1*l2);
                }
            }
        }
        return ans;
    }
};