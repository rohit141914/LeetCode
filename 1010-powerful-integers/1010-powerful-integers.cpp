class Solution {
public:
    int power(int x,int n,int b){
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*x;
            if(ans>b){
                return -1;
            }
        }
        return ans;
    }
    vector<int> powerfulIntegers(int x, int y, int bound) {
        int l=sqrt(bound);
        set<int>st;
        long long int c=0;
        for(int i=0;i<=l;i++){
            for(int j=0;j<=l;j++){
                // cout<<i<<" "<<j<<" ";
                int a=power(x,i,bound);
                int b=power(y,j,bound);
                if(a==-1||b==-1){
                    break;
                }
                c=a+b;
                // cout<<" "<<c<<"   ";
                if(c>bound)break;
                st.insert(c);
            }
        }
        vector<int>ans;
        for(auto a:st){
            ans.push_back(a);
        }
        return ans;
    }
};