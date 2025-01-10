class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char,int>m;
        for(auto x:words2){
            map<char,int>temp;
            for(auto xx:x){
            temp[xx]++;
            }
            for(auto y:temp){
                m[y.first]=max(y.second,m[y.first]);
            }
        }

        vector<string>res;

            bool continue1=true;
        for(auto x:words1){
            map<char,int>t;
            for(auto xx:x){
                t[xx]++;
            }
            continue1=true;
            for(auto q:m){
                int p=q.second;
                if(t[q.first]<p){
                    continue1=false;
                    break;
                }
            }
            if(continue1){
                res.push_back(x);
            }
        }
        return res;
    }
};