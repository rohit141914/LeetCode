class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        for(auto a:s){
            if(a==letter)c++;
        }
        return (c*100)/s.length();
    }
};