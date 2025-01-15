class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& s, int time) {
        int l=s.size();
        vector<int>lis(l,0);
        vector<int>lds(l,0);
        for(int i=1;i<l;i++){
            if(s[i]<=s[i-1]){
                lis[i]=lis[i-1]+1;
            }
        }
        for(int i=l-2;i>=0;i--){
            if(s[i]<=s[i+1]){
                lds[i]=lds[i+1]+1;
            }
        }
        for(auto a:lds){
            cout<<a<<' ';
        }
        cout<<'-';
        for(auto a:lis){
            cout<<a<<' ';
        }
        vector<int>res;
        for(int i=time;i<l-time;i++){
            if(lds[i]>=time&&lis[i]>=time){
                res.push_back(i);
            }
        }
        return res;
    }
};