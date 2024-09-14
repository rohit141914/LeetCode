class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;
        for(auto x:allowed){
            s.insert(x);
        }
        int ln=words.size();
        int c=0;
        for(int i=0;i<ln;i++){
        int count=0;
            for(auto x:words[i]){
                if(s.find(x)==s.end()){
                    break;
                }
                count++;
            }
            if(count==words[i].size()){
            c++;
            }
        }
        return c;
    }
};