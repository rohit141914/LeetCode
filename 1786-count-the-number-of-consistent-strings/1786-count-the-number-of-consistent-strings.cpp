class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>ch;
        for(auto x:allowed){
            ch.insert(x);
        }
        int sum=0;
        for(auto x:words){
            int ln=x.size();
            for(auto y:x){
                if(ch.find(y)==NULL){
                    break;
                }
                else{
                    ln--;
                }
            }
            if(ln==0) sum++;
        }
        return sum;
    }
};