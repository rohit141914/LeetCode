class Solution {
public:
    int maxScore(string s) {
        int t_one=0;
        for(auto x:s){
            if(x=='1')  t_one++;
        }
        int res=0;
        int sum;
        int left=0;
        int ln=s.size();
        for(int i=0;i<ln-1;i++){
            if(s[i]=='0'){
                left++;
                sum=left+t_one;
                res=max(res,sum);
            }
            else{
                t_one--;
                sum=left+t_one;
                res=max(res,sum);
            }
        }
        return res;
    }
};