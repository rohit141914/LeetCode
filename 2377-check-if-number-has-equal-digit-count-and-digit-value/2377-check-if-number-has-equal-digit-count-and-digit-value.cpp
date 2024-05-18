class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>m;
        for(int i=0;i<num.length();i++){
            string c="";
            c=c+num[i];
            int b=stoi(c);
            m[b]++;
        }
        // cout<<m.size();
        for(int i=0;i<num.length();i++){
            int a=m[i];
            string c="";
            c=c+num[i];
            int d=stoi(c);
            if(a!=d){
                cout<<"+";
                return 0;
            }
        }
        return 1;

    }
};