class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        vector<int>temp={1};
        res.push_back(temp);
        if(n==1){
            return res;
        }

        for(int i=2;i<=n;i++){
            temp.clear();
            temp.push_back(1);
            for(int j=1;j<i-1;j++){
                int num=0;
                    num=res[i-2][j-1]+res[i-2][j];
                    temp.push_back(num);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }
};