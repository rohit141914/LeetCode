class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,vector<int>>mp;
        int l=s.length();

        for(int i=0;i<l;i++){
            mp[s[i]].push_back(i);
        }
        vector<int>t;
            int c=0;
        for(auto a:mp){
            l=a.second.size();
            if(l<3){
                continue;
            }
            t=a.second;
            for(int i=1;i<l;i=i+2){
                if(i+1<l){
                    s[t[i-1]]=' ';
                    s[t[i+1]]=' ';
                    c+=2;
                }
            }
        }
        l=s.length();
        // for(int i=0;i<l;i++){
        //     if(s[i]!=' '){
        //         swap(s[i],s[j]);
        //         j++;
        //     }
        // }
        return l-c;
    }
};