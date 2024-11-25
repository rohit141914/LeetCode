class Solution {
public:
    int minTimeToType(string word) {
        int t=0;
        char p='a';
        for(int i=0;i<word.length();i++){
            int l=abs(word[i]-p);
            if(l>=14){
                l=26-l;
            }
            t+=l;
            t++;
            p=word[i];
        }
        return t;
    }
};