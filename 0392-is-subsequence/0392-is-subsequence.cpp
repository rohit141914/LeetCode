class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1=s.length();
        if(l1==0){
            return 1;
        }
        int l2=t.length();
        int s1=0;
        int s2=0;
        while((s1<l1)&&(s2<l2)){
            if(s[s1]==t[s2]){
                s1++;
                s2++;
                if(s1==l1){
                    return 1;
                }
                continue;
            }
                s2++;
        }
        return 0;
    }
};