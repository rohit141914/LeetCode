class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        int l=s1.length();
        if(s1.length()!=s2.length()){
            return false;
        }
        int a=-1;
        int b=-1;
        for(int i=0;i<l;i++){
            if(s1[i]!=s2[i]){
                c++;
                if(a==-1){
                    a=i;
                }
                b=i;
            };
        }
        if(c==0){
            return true;
        }
        if(c==2 &&(s1[a]==s2[b]&&s1[b]==s2[a])){
            return true;
        }
        return false;
    }
};