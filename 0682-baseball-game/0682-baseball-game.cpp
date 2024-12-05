class Solution {
public:
    int calPoints(vector<string>& o) {
        int n=o.size();
        vector<int> a;
            int sum=0;
        for(int i=0;i<n;i++){
            if(o[i]=="C"){
                a.pop_back();
                continue;
            }
            else if(o[i]=="D"){
                int l=a.size();
                int nu=a[l-1]*2;
                 a.push_back(nu);
                 continue;
            }

            else if(o[i]=="+"){
                 int l=a.size();
                 int sum=a[l-2]+a[l-1];
                    a.push_back(sum);
                 continue;
            }
            else{
                int b=stoi(o[i]);
                a.push_back(b);
            }
        }
        for(auto x:a){
            sum+=x;
        }
        return sum;
    }
};